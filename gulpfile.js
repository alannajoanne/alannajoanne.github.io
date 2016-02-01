
// This gulpfile extends the Jekyll build flow,
// and deploys to two free GitHub Pages servers.
// The main Jekyll site,
// and a static assets repo.
// File optimizations are done with Gulp.
// SASS is processed by Jekyll build.
// A development server provided by Jekyll,
// and a test production server with BrowserSync.

// Dependencies
var gulp = require('gulp');
var del = require('del');
var htmlmin = require('gulp-htmlmin');
var eslint = eslint = require('gulp-eslint');
var uglify = require('gulp-uglify');
var shell = require('gulp-shell');
var browserSync = require('browser-sync');
var deploy = require('gulp-gh-pages');
var cssnano = require('gulp-cssnano');

// An anti-pattern file for the Shoots site,
// currently hosting our Kraken secrets.
// Make this directory:
// _private
// And inside it, add this file:
// config.json
// Inside that file, add this text,
// changing the `xxxx` to your Kraken API credentials
/*
  {
    "kraken": {
      "key": "xxxx",
      "secret": "xxxx",
      "lossy": false,
      "resize": {
        "width": 1500,
        "height": 1500,
        "strategy": "auto"
      }
    }
  }
*/
var privateConfig = require('./_private/config');

// Using a kraken fork that adds their resizing API
// to the library.
// (My changes are upstream in a pull request.)
var kraken = require('./lib/gulp-kraken');
// var kraken = require('gulp-kraken');

// Empty the _site directory
gulp.task('clean', function () {
  return del('_site/**/*');
});

// Lint the JS
gulp.task('lint', function () {
  return gulp.src(['**/*.js',
      '!node_modules/**',
      '!_site/**',
      '!lib/**'
    ])
    .pipe(eslint())
    .pipe(eslint.format())
    .pipe(eslint.failAfterError());
});

// Serve _site directory
gulp.task('serve', shell.task([
  'jekyll serve'
]));

// Serve _site directory, production version
gulp.task('serve:production', ['build'], function() {
  browserSync.init(null, {
    server: {
      baseDir: './_site'
    }
  });
});

// Build _site directory
// Copy, process SASS, etc
gulp.task('jekyll build', ['clean'], shell.task([
  'jekyll build'
]));

// HTML
gulp.task('minify', ['jekyll build'], function() {
  return gulp.src([
    '_site/**/*.html',
    '!_site/node_modules/**/*.html'])
    .pipe(htmlmin({ collapseWhitespace: true }))
    .pipe(gulp.dest('_site'));
});

// JavaScript
gulp.task('uglify', ['jekyll build'], function() {
  return gulp.src('_site/assets/js/shoots.js')
    .pipe(uglify())
    .pipe(gulp.dest('_site/assets/js'));
});

// CSS
gulp.task('cssnano', ['jekyll build'], function() {
  return gulp.src('_site/assets/css/main.css')
      .pipe(cssnano())
      .pipe(gulp.dest('_site/assets/css'));
});

// Images
gulp.task('kraken', ['jekyll build'], function () {
  if (!privateConfig.kraken) {
    console.log('--- Missing Kraken Config');
    console.log('--- Contact @jasonhargrove');
    return;
  }

  return gulp.src('_site/assets/images/**/*.*')
    .pipe(kraken(privateConfig.kraken));
});

// Deploy _site/assets/ to production assets server
// This will deploy to a project site
// branched off our main site.
// We'll use this for serving assets (it's free!)
// and this will allow us to use Kraken
// a few times per week (on demand)
// rather than every time we build the production _site
// (reducing our Kraken costs)
// The gh-pages branch of the `shootsofficial.assets` repo
// (the org's project's GitHub Page)
// // http://shootsofficial.com/shootsofficial.assets
// Usage example:
// http://shootsofficial.com/shootsofficial.assets/images/duy-montreal-fashion-week-jasonhargrove.jpg
gulp.task('deploy:assets', ['kraken'], function () {
  return gulp.src('./_site/assets/**/*')
    .pipe(deploy({
      remoteUrl: 'https://github.com/alannajoanne/alannajoanne.assets',
      branch: 'gh-pages'
    }));
});

// Deploy _site to production server
// The master branch of the shootsofficial.github.io repo
// (the organization's main GitHub Page)
// http://shootsofficial.com
gulp.task('deploy:production', ['build'], function() {
  return gulp.src('./_site/**/*')
    .pipe(deploy({
      remoteUrl: 'https://github.com/alannajoanne/alannajoanne.github.io',
      branch: 'master'
    }));
});

// Build jekyll site
gulp.task('build', ['jekyll build', 'minify', 'uglify', 'cssnano']);

// Shortcut
gulp.task('default', ['build']);
