<?php
/**
 * @file
 * roles.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function roles_user_default_roles() {
  $roles = array();

  // Exported role: contributor.
  $roles['contributor'] = array(
    'name' => 'contributor',
    'weight' => 3,
  );

  // Exported role: editor.
  $roles['editor'] = array(
    'name' => 'editor',
    'weight' => 4,
  );

  // Exported role: subscriber.
  $roles['subscriber'] = array(
    'name' => 'subscriber',
    'weight' => 2,
  );

  return $roles;
}
