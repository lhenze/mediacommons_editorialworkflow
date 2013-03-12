<?php
/**
 * @file
 * mediacommons_datastructure.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function mediacommons_datastructure_user_default_permissions() {
  $permissions = array();

  // Exported permission: access comments.
  $permissions['access comments'] = array(
    'name' => 'access comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: access content.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: access content overview.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: access mediacommons content.
  $permissions['access mediacommons content'] = array(
    'name' => 'access mediacommons content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_editorialworkflow',
  );

  // Exported permission: access mediacommons dashboard.
  $permissions['access mediacommons dashboard'] = array(
    'name' => 'access mediacommons dashboard',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_editorialworkflow',
  );

  // Exported permission: admin contributors content.
  $permissions['admin contributors content'] = array(
    'name' => 'admin contributors content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_editorialworkflow',
  );

  // Exported permission: administer content types.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: administer mediacommons.
  $permissions['administer mediacommons'] = array(
    'name' => 'administer mediacommons',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_imageextended',
  );

  // Exported permission: administer nodes.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: bypass node access.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: contribute content hub.
  $permissions['contribute content hub'] = array(
    'name' => 'contribute content hub',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_editorialworkflow',
  );

  // Exported permission: contribute content spoke.
  $permissions['contribute content spoke'] = array(
    'name' => 'contribute content spoke',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_editorialworkflow',
  );

  // Exported permission: create hub content.
  $permissions['create hub content'] = array(
    'name' => 'create hub content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: create page content.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create spoke content.
  $permissions['create spoke content'] = array(
    'name' => 'create spoke content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any hub content.
  $permissions['delete any hub content'] = array(
    'name' => 'delete any hub content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete any page content.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any spoke content.
  $permissions['delete any spoke content'] = array(
    'name' => 'delete any spoke content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own hub content.
  $permissions['delete own hub content'] = array(
    'name' => 'delete own hub content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete own page content.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own spoke content.
  $permissions['delete own spoke content'] = array(
    'name' => 'delete own spoke content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: delete revisions.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any hub content.
  $permissions['edit any hub content'] = array(
    'name' => 'edit any hub content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit any page content.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any spoke content.
  $permissions['edit any spoke content'] = array(
    'name' => 'edit any spoke content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own comments.
  $permissions['edit own comments'] = array(
    'name' => 'edit own comments',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'comment',
  );

  // Exported permission: edit own hub content.
  $permissions['edit own hub content'] = array(
    'name' => 'edit own hub content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: edit own page content.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own spoke content.
  $permissions['edit own spoke content'] = array(
    'name' => 'edit own spoke content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: post comments.
  $permissions['post comments'] = array(
    'name' => 'post comments',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: promote hub content.
  $permissions['promote hub content'] = array(
    'name' => 'promote hub content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_editorialworkflow',
  );

  // Exported permission: revert revisions.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: set current hub.
  $permissions['set current hub'] = array(
    'name' => 'set current hub',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_editorialworkflow',
  );

  // Exported permission: set upcoming hub.
  $permissions['set upcoming hub'] = array(
    'name' => 'set upcoming hub',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'mediacommons_editorialworkflow',
  );

  // Exported permission: skip comment approval.
  $permissions['skip comment approval'] = array(
    'name' => 'skip comment approval',
    'roles' => array(
      0 => 'administrator',
      1 => 'authenticated user',
    ),
    'module' => 'comment',
  );

  // Exported permission: use text format filtered_html.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      0 => 'administrator',
      1 => 'anonymous user',
      2 => 'authenticated user',
    ),
    'module' => 'filter',
  );

  // Exported permission: use text format full_html.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: view own unpublished content.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: view revisions.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
