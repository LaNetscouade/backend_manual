jQuery(document).ready(function(t){t(".button-collapse").sideNav(),t(".collapsible").collapsible(),t(document).ready(function(){var e=t("#bm_content img");null!=e.length&&t("#bm_content img").each(function(){$this=t(this),"undefined"!=typeof $this.attr("alt")&&t('<p class="image-label">'+$this.attr("alt")+"</p>").insertAfter($this)})})});