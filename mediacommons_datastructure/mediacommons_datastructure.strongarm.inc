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
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'date_default_timezone';
  $strongarm->value = 'America/New_York';
  $export['date_default_timezone'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_convert';
  $strongarm->value = 'convert';
  $export['imagemagick_convert'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_debug';
  $strongarm->value = 0;
  $export['imagemagick_debug'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'imagemagick_quality';
  $strongarm->value = '75';
  $export['imagemagick_quality'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'image_toolkit';
  $strongarm->value = 'imagemagick';
  $export['image_toolkit'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediacommons_imageextended_djatoka_metadataurl';
  $strongarm->value = 'http://dl-img.home.nyu.edu/adore-djatoka?';
  $export['mediacommons_imageextended_djatoka_metadataurl'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediacommons_imageextended_djatoka_service';
  $strongarm->value = 'http://dl-img.home.nyu.edu/adore-djatoka';
  $export['mediacommons_imageextended_djatoka_service'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediacommons_imageextended_djatoka_service_host';
  $strongarm->value = 'http://dl-img.home.nyu.edu/adore-djatoka';
  $export['mediacommons_imageextended_djatoka_service_host'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'mediacommons_imageextended_openlayers';
  $strongarm->value = 'a:1:{s:7:"plugins";a:1:{s:7:"openurl";a:3:{s:15:"openurlResolver";s:11:"Z39.88-2004";s:9:"serviceId";s:30:"info:lanl-repo/svc/getMetadata";s:11:"metadataurl";s:41:"http://dl-img.home.nyu.edu/adore-djatoka?";}}}';
  $export['mediacommons_imageextended_openlayers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'bartik';
  $export['theme_default'] = $strongarm;

  return $export;
}
