<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function atrium_taxonomy_default_vocabularies() {
  return array(
    'keywords' => array(
      'name' => 'Keywords',
      'description' => NULL,
      'help' => 'Enter tags related to your post.',
      'relations' => '0',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_keywords',
      'weight' => '-7',
      'nodes' => array(
        'blog' => 'blog',
        'book' => 'book',
        'casetracker_basic_case' => 'casetracker_basic_case',
        'casetracker_basic_project' => 'casetracker_basic_project',
        'event' => 'event',
      ),
    ),
  );
}
