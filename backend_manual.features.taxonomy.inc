<?php
/**
 * @file
 * backend_manual.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function backend_manual_taxonomy_default_vocabularies() {
  $backend_manual_category = array(
    'backend_manual_category' => array(
      'name' => 'Backend manual category',
      'machine_name' => 'backend_manual_category',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
  if (module_exists('i18n')) {
    $backend_manual_category['backend_manual_category']['language'] = 'und';
    $backend_manual_category['backend_manual_category']['i18n_mode'] = 0;
  }

  return $backend_manual_category;
}
