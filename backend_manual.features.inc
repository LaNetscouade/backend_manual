<?php
/**
 * @file
 * backend_manual.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function backend_manual_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function backend_manual_node_info() {
  $items = array(
    'manual_page' => array(
      'name' => t('Manual Page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
