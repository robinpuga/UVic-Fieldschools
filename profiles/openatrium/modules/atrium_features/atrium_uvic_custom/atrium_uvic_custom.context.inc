<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_uvic_custom_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_listing_public';
  $context->description = 'This is the pubic blog view context. ';
  $context->tag = 'uvic custom';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'blog_listing_public' => 'blog_listing_public',
        'blog_listing_public:page_1' => 'blog_listing_public:page_1',
        'blog_node_view' => 'blog_node_view',
        'blog_node_view:page_1' => 'blog_node_view:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-blog_listing_public-block_1' => array(
          'module' => 'views',
          'delta' => 'blog_listing_public-block_1',
          'region' => 'right',
          'weight' => 0,
        ),
      ),
    ),
    'menu' => 'public/blog',
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('This is the pubic blog view context. ');
  t('uvic custom');
  $export['blog_listing_public'] = $context;

  return $export;
}
