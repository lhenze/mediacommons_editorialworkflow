<?php
/**
 * @file
 * mediacommons_datastructure.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function mediacommons_datastructure_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_hub_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => 0,
      'has_required' => 1,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => 8,
      'has_required' => 0,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'main',
      'weight' => 9,
      'has_required' => 0,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'field_cluster_tags' => array(
      'region' => 'right',
      'weight' => 3,
      'has_required' => 0,
      'title' => 'Tags',
      'hidden' => 0,
    ),
    'field_contributors' => array(
      'region' => 'right',
      'weight' => 2,
      'has_required' => 0,
      'title' => 'Contributors',
      'hidden' => 0,
    ),
    'field_description' => array(
      'region' => 'main',
      'weight' => 1,
      'has_required' => 0,
      'title' => 'Description',
      'hidden' => 0,
    ),
    'field_field_period' => array(
      'region' => 'right',
      'weight' => 0,
      'has_required' => 0,
      'title' => 'Start and end dates',
      'hidden' => 0,
    ),
    'field_representative_image' => array(
      'region' => 'main',
      'weight' => 4,
      'has_required' => 0,
      'title' => 'Representative Image',
      'hidden' => 0,
    ),
    'field_spokes' => array(
      'region' => 'right',
      'weight' => 1,
      'has_required' => 0,
      'title' => 'Contributed Pieces',
      'hidden' => 0,
    ),
    'field_type' => array(
      'region' => 'main',
      'weight' => 2,
      'has_required' => 1,
      'title' => 'Choose type',
    ),
    'field_video_embed_link' => array(
      'region' => 'main',
      'weight' => 3,
      'has_required' => 0,
      'title' => 'Video embed link',
      'hidden' => 0,
    ),
    'field_co_editor' => array(
      'region' => 'right',
      'weight' => 4,
      'has_required' => 0,
      'title' => 'Co-editor',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_hub_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_spoke_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => 0,
      'has_required' => 1,
      'title' => 'Title',
    ),
    'additional_settings' => array(
      'region' => 'main',
      'weight' => 5,
      'has_required' => 0,
      'title' => 'Vertical tabs',
      'hidden' => 0,
    ),
    'actions' => array(
      'region' => 'main',
      'weight' => 6,
      'has_required' => 0,
      'title' => 'Save',
      'hidden' => 0,
    ),
    'field_attached_images' => array(
      'region' => 'right',
      'weight' => 2,
      'has_required' => 0,
      'title' => 'Attached Images',
      'hidden' => 0,
    ),
    'field_body' => array(
      'region' => 'main',
      'weight' => 1,
      'has_required' => 0,
      'title' => 'Body',
      'hidden' => 0,
    ),
    'field_part_of_hub' => array(
      'region' => 'right',
      'weight' => 0,
      'has_required' => 0,
      'title' => 'Part of',
      'hidden' => 0,
    ),
    'field_pubstat' => array(
      'region' => 'right',
      'weight' => 3,
      'has_required' => 1,
      'title' => 'Publication Status',
    ),
    'field_contributors' => array(
      'region' => 'right',
      'weight' => 1,
      'has_required' => 0,
      'title' => 'Contributors',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_spoke_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_default_country';
  $strongarm->value = '';
  $export['site_default_country'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_mail';
  $strongarm->value = 'aortiz@nyu.edu';
  $export['site_mail'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'MediaCommons Project';
  $export['site_name'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'bartik';
  $export['theme_default'] = $strongarm;

  return $export;
}
