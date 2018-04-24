<?php
/**
 * @file
 * animals.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function animals_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create activity content'.
  $permissions['create activity content'] = array(
    'name' => 'create activity content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create animal content'.
  $permissions['create animal content'] = array(
    'name' => 'create animal content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any activity content'.
  $permissions['delete any activity content'] = array(
    'name' => 'delete any activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any animal content'.
  $permissions['delete any animal content'] = array(
    'name' => 'delete any animal content',
    'roles' => array(
      'administrator' => 'administrator',
      'managers' => 'managers',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own activity content'.
  $permissions['delete own activity content'] = array(
    'name' => 'delete own activity content',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own animal content'.
  $permissions['delete own animal content'] = array(
    'name' => 'delete own animal content',
    'roles' => array(
      'administrator' => 'administrator',
      'managers' => 'managers',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any activity content'.
  $permissions['edit any activity content'] = array(
    'name' => 'edit any activity content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any animal content'.
  $permissions['edit any animal content'] = array(
    'name' => 'edit any animal content',
    'roles' => array(
      'administrator' => 'administrator',
      'managers' => 'managers',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own activity content'.
  $permissions['edit own activity content'] = array(
    'name' => 'edit own activity content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
      'managers' => 'managers',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own animal content'.
  $permissions['edit own animal content'] = array(
    'name' => 'edit own animal content',
    'roles' => array(
      'administrator' => 'administrator',
      'managers' => 'managers',
    ),
    'module' => 'node',
  );

  return $permissions;
}
