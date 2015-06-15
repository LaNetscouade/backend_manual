jQuery(document).ready(function( $ ) {

	// Mobile
	// Initialize collapse button
	$('.button-collapse').sideNav();
	// Initialize collapsible (uncomment the line below if you use the dropdown variation)
	$('.collapsible').collapsible();
	
	$(document).ready(function(){
		var contentImg = $('#bm_content img');
		if ( contentImg.length != null ) {
			$('#bm_content img').each(function () {
	      		$this = $(this);
		      	if (typeof($this.attr('alt')) != 'undefined') {
		  			$('<p class="image-label">' + $this.attr('alt') + '</p>').insertAfter($this);
		      	}
			});
		}
	});

});
