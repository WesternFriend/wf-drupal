<?php
/**
 * @file
 * magazine_issue_publish.features.inc
 */

/**
 * Implements hook_node_info().
 */
function magazine_issue_publish_node_info() {
  $items = array(
    'magazine_issue' => array(
      'name' => t('Magazine Issue'),
      'base' => 'node_content',
      'description' => t('Western Friend magazine issue.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
