<?php
/**
 * @file
 * animals.features.inc
 */

/**
 * Implements hook_views_api().
 */
function animals_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function animals_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Activity'),
      'base' => 'node_content',
      'description' => t('Care Givers must be able to create a log entry for each animal.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'animal' => array(
      'name' => t('Animal'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
