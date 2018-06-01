---
layout: page 
title:
permalink: /poetry/collections
excerpt: 'On the Path of the Beam // Twitter: @alanna_joanne'
author: 'Alanna Joanne'
authorTwitter: '@alanna_joanne'
---

<div>
  <ul class="post-list">
    {% for post in site.posts.collections %}
    <li>
      <span class="post-meta">{{ post.date | date: "%b %-d, %Y" }}</span>

      <h2>
        <a class="post-link" href="{{ post.url | prepend: site.baseurl }}">{{ post.title }}</a>
      </h2>
      <p class="post-content">
        {{ post.excerpt }}
      </p>
    </li>
    {% endfor %}
  </ul>
</div> 