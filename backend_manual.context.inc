<?php
/**
 * @file
 * backend_manual.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function backend_manual_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'backend_manual';
  $context->description = '';
  $context->tag = 'Backend manual context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'manual_page' => 'manual_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        'admin/backend_manual' => 'admin/config/backend_manual/summary',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Backend manual context');
  $export['backend_manual'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'backend_manual_content';
  $context->description = '';
  $context->tag = 'Backend manual context';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'manual_page' => 'manual_page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'backend_manual-backend_manual_menu' => array(
          'module' => 'backend_manual',
          'delta' => 'backend_manual_menu',
          'region' => 'bm_sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Backend manual context');
  $export['backend_manual_content'] = $context;

  return $export;
}
