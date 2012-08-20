(function ($) {

  
Drupal.behaviors.blog_post_form_init = function (context) {
  
  $("select#edit-field-discussion-post-type-value").change(function () {   
    var post_type = $("select#edit-field-discussion-post-type-value option:selected").val();
    if ( post_type == 'blog_post' ) {
      $('div#edit-field-blog-public-state-value-wrapper').show("fast");
    } else   {
      
      $('div#edit-field-blog-public-state-value-wrapper').hide("fast");
      $("select#edit-field-blog-public-state-value").val('not_public');
    }
    return false; 
  });

};

})(jQuery);