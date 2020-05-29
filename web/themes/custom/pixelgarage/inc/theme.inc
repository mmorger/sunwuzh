<?php
/**
 * Created by PhpStorm.
 * User: ralph
 * Date: 06.02.15
 * Time: 17:22
 */
function pixelgarage_preprocess_field(&$variables, $hook) {
  $element = $variables['element'];
  $parentEntity = $element['#object'];
  //might be useful for if-clause: $variables['field_name'] and $variables['field_type']
  if ($parentEntity && $parentEntity->getEntityTypeId() == 'paragraph' ) {

    //whatever logic you need goes here, e.g. something like
    $variables['attributes']['data-from-parent-paragraph'] = $parentEntity->getYourStuff();
  }
}