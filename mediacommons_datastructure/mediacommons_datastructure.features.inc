<?php
/**
 * @file
 * mediacommons_datastructure.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_datastructure_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "corresponding_node_references" && $api == "default_corresponding_node_references_presets") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function mediacommons_datastructure_node_info() {
  $items = array(
    'hub' => array(
      'name' => t('Hub'),
      'base' => 'node_content',
      'description' => t('A theme-based aggregation of contributed pieces.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'spoke' => array(
      'name' => t('Spoke'),
      'base' => 'node_content',
      'description' => t('A text or multimedia document.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
