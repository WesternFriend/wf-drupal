<?php
/**
 * @file
 * pages_issues.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pages_issues_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'issues';
  $page->task = 'page';
  $page->admin_title = 'Issues';
  $page->admin_description = 'Designed to show issue related content.';
  $page->path = 'issue';
  $page->access = array(
    'logic' => 'and',
  );
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_issues_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'issues';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Issue',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e31390bf-986f-4039-a276-2a79d5c56a70';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fcb27116-9508-4417-8d38-790182adbacd';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'issue-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'items_per_page' => '10',
      'offset' => '0',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fcb27116-9508-4417-8d38-790182adbacd';
    $display->content['new-fcb27116-9508-4417-8d38-790182adbacd'] = $pane;
    $display->panels['left'][0] = 'new-fcb27116-9508-4417-8d38-790182adbacd';
    $pane = new stdClass();
    $pane->pid = 'new-3790e4e7-7783-4450-b46e-b375330fb6b0';
    $pane->panel = 'top';
    $pane->type = 'node';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'nid' => '3',
      'links' => 1,
      'leave_node_title' => 0,
      'identifier' => '',
      'build_mode' => 'teaser',
      'link_node_title' => 0,
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3790e4e7-7783-4450-b46e-b375330fb6b0';
    $display->content['new-3790e4e7-7783-4450-b46e-b375330fb6b0'] = $pane;
    $display->panels['top'][0] = 'new-3790e4e7-7783-4450-b46e-b375330fb6b0';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-fcb27116-9508-4417-8d38-790182adbacd';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['issues'] = $page;

  return $pages;

}
