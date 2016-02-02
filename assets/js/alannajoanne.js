'use strict';

function App () {
  return {
    start: function () {
      console.log('Alanna Joanne 🌳');
      return this;
    }
  };
};

function start () {
  window.alannajoanne = App();
  return window.alannajoanne.start();
}

function onReady (cb) {
  if (document.readyState === 'complete') {
    return cb();
  }

  document.addEventListener('DOMContentLoaded', cb, false);
};

onReady(function () {
  var app = start();
});
