<?php

/**
 * Implementation of hook_user_default_roles().
 */
function atrium_uvic_custom_user_default_roles() {
  $roles = array();

  // Exported role: instructor
  $roles['instructor'] = array(
    'name' => 'instructor',
  );

  return $roles;
}
