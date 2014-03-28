<?php
/**
 * @file
 * articles_magazine_publish.features.inc
 */

/**
 * Implements hook_node_info().
 */
function articles_magazine_publish_node_info() {
  $items = array(
    'article_magazine' => array(
      'name' => t('Article (Magazine)'),
      'base' => 'node_content',
      'description' => t('Western Friend magazine issue article.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
