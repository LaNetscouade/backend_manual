<?php
/**
 * @file
 * backend_manual.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function backend_manual_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-manual_page-field_bm_body'
  $field_instances['node-manual_page-field_bm_body'] = array(
    'bundle' => 'manual_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => _backend_manual_field_display('text_default', 1),
    'entity_type' => 'node',
    'field_name' => 'field_bm_body',
    'label' => 'Body',
    'required' => 1,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-manual_page-field_bm_category'
  $field_instances['node-manual_page-field_bm_category'] = array(
    'bundle' => 'manual_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => _backend_manual_field_display('hidden'),
    'entity_type' => 'node',
    'field_name' => 'field_bm_category',
    'label' => 'Category',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-manual_page-field_bm_linked_page'
  $field_instances['node-manual_page-field_bm_linked_page'] = array(
    'bundle' => 'manual_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => _backend_manual_field_display('text_default'),
    'entity_type' => 'node',
    'field_name' => 'field_bm_linked_page',
    'label' => 'Linked Page',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-manual_page-field_bm_subtitle'
  $field_instances['node-manual_page-field_bm_subtitle'] = array(
    'bundle' => 'manual_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => _backend_manual_field_display('text_default', 0),
    'entity_type' => 'node',
    'field_name' => 'field_bm_subtitle',
    'label' => 'Subtitle',
    'required' => 0,
    'settings' => array(
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Category');
  t('Linked Page');
  t('Subtitle');

  return $field_instances;
}

/**
 * helper: manage display for custom field view mode witch custom_settings = TRUE
 * @param string $type: field display type
 *        integer $weight: field display weight
 * @return array display for each view_mode
 */
function _backend_manual_field_display($type, $weight = 0) {
  $display = array();
  $entity_info = entity_get_info('node');
  $display['default'] = array(
    'label' => 'hidden',
    'module' => 'text',
    'settings' => array(),
    'type' => $type,
    'weight' => $weight,
  );
  foreach ($entity_info['view modes'] as $key => $value) {
    if ($value['custom settings'] == 'TRUE') {
      $display[$key] = array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => $type,
        'weight' => $weight,
      );
    }
  }

  return $display;
}
