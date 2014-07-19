<?php
/**
 * @file
 * wf_video.features.inc
 */

/**
 * Implements hook_node_info().
 */
function wf_video_node_info() {
  $items = array(
    'video' => array(
      'name' => t('Video'),
      'base' => 'node_content',
      'description' => t('A video to be included in the Western Friend media gallery.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
