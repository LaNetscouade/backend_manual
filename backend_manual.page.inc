<?php

/**
 * menu callback
 * The summary page of the backend manual
 */
function backend_manual_main_page() {
  drupal_add_js(drupal_get_path('module', 'backend_manual') . '/js/vendor.js');
  drupal_add_js(drupal_get_path('module', 'backend_manual') . '/js/main.js');

  // get category terms
  $category_terms = _backend_manual_get_category_terms();
  $i = 0;
  $term_items = array();
  foreach ($category_terms as $term) {
    $i ++;
    // get nodes for each category term
    $nodes = taxonomy_select_nodes($term->tid, FALSE, FALSE, array('t.created' => 'ASC'));
    $node_view_items = array();
    foreach ($nodes as $nid) {
      $node              = node_load($nid);
      $node_view         = node_view($node, 'teaser');
      $node_view_items[] = render($node_view);
    }

    $item_header = array(
      '#type'       => 'container',
      '#attributes' => array('class' => array('collapsible-header', $i == 1 ? 'active' : NULL)),
      'content' => array(
        '#type'   => 'markup',
        '#markup' => $term->name . '<i class="icon-keyboard-arrow-down right"></i>'
      )
    );

    // create item list fo each node
    $item_body = array(
      '#type'       => 'container',
      '#attributes' => array('class' => array('collapsible-body')),
      'content' => array(
        '#theme' => 'item_list',
        '#items' => $node_view_items
      )
    );

    $term_items[] = render($item_header) . render($item_body);
  }

  $render = array(
    '#type' => 'container',
    'intro' => array(
      '#type'   => 'markup',
      '#markup' => variable_get('backend_manual_intro'),
      '#weight' => 0,
    )
  );

  if (count($term_items)) {
    $render['content_list'] = array(
      '#theme'  => 'item_list',
      '#items'  => $term_items,
      '#weight' => 1,
      '#attributes' => array(
        'class'            => 'collapsible',
        'data-collapsible' => 'expandable'
      ),
    );
  }
  else {
    $render['content_list'] = array(
      '#markup' => t('there is no manual content yet'),
    );
  }

  return $render;
}