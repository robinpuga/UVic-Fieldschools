<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_members_user_default_permissions() {
  $permissions = array();

  // Exported permission: block users
  $permissions['block users'] = array(
    'name' => 'block users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'instructor',
    ),
  );

  // Exported permission: create users
  $permissions['create users'] = array(
    'name' => 'create users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'instructor',
    ),
  );

  return $permissions;
}
