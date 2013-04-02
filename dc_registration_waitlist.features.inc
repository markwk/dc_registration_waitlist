<?php
/**
 * @file
 * dc_registration_waitlist.features.inc
 */

/**
 * Implements hook_views_api().
 */
function dc_registration_waitlist_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_flag_default_flags().
 */
function dc_registration_waitlist_flag_default_flags() {
  $flags = array();
  // Exported flag: "Adds users to product waitlist".
  $flags['waitlist'] = array(
    'entity_type' => 'commerce_product',
    'title' => 'Adds users to product waitlist',
    'global' => '0',
    'types' => array(
      0 => 'panopoly_paid_event',
      1 => 'sponsor_event',
    ),
    'flag_short' => 'Add me to waitlist',
    'flag_long' => '',
    'flag_message' => 'Added to waitlist',
    'unflag_short' => 'Remove me from waitlist',
    'unflag_long' => '',
    'unflag_message' => 'Removed from waitlist',
    'unflag_denied_text' => '',
    'link_type' => 'toggle',
    'weight' => 0,
    'show_on_entity' => 1,
    'show_on_form' => 0,
    'access_author' => '',
    'show_contextual_link' => 0,
    'module' => 'dc_registration_waitlist',
    'locked' => array(
      0 => 'name',
    ),
    'api_version' => 3,
  );
  return $flags;

}
