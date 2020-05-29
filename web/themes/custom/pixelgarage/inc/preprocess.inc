<?php
/**
 * Created by PhpStorm.
 * User: ralph
 * Date: 06.02.15
 * Time: 17:23
 */

/**
 * Preprocess variables for the html template.
 */
function pixelgarage_preprocess_html(&$vars) {
  // make sure jQuery UI and effects is loaded for anonymous users
  if ($node = \Drupal::request()->attributes->get('node')) {
    $vars['attributes']['class'][] = 'page-node-' . $node->id();
  }
}

/**
 * Override or insert variables for the page templates.
 */
function pixelgarage_preprocess_page(&$vars) {
  $vars['site_name'] = \Drupal::config('system.site')->get('name');
  $vars['theme_path'] = base_path() . $vars['directory'];
  // hide titles on login forms
  //pg_login_preprocess_page($vars);
}
//function pixelgarage_preprocess_paragraph__lektion(&$variables) {
//  $paragraph = $variables['paragraph'];
//
//  if (!$paragraph->field_link_content->isEmpty() && !$paragraph->field_titel->isEmpty()) {
//    $link = $paragraph->field_link_content->uri;
//    if (!empty($link)) {
//      $variables['my_title_link'] = $link;
//    }
//  }
//}


//function pixelgarage_preprocess_field(&$variables) {
//  $element = $variables['element'];
//  if ($element['#name'] == 'field_link') {
//    $variables['items'][0]['content']['#options']['attributes']['class'][] = 'BUTT';
//  }
//}