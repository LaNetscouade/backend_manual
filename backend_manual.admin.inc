<?php

function backend_manual_settings_form() {
  $form['backend_manual_intro'] = array(
   '#type'           => 'text_format',
   '#title'          => t('Intro text for summary'),
   '#default_value'  => variable_get('backend_manual_intro', NULL),
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

function backend_manual_settings_form_submit($form, &$form_state) {
  variable_set('backend_manual_intro', $form_state['input']['backend_manual_intro']['value']);
}
