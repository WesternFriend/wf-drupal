<?php
/**
 * @file
 * meeting_worship_group_create.features.inc
 */

/**
 * Implements hook_node_info().
 */
function meeting_worship_group_create_node_info() {
  $items = array(
    'group' => array(
      'name' => t('Meeting/Worship Group'),
      'base' => 'node_content',
      'description' => t('Add a meeting, worship group, or other Quaker group.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
