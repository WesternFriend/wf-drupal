<?php
/**
 * @file
 * pages_welcome.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pages_welcome_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'welcome';
  $page->task = 'page';
  $page->admin_title = 'Welcome';
  $page->admin_description = '';
  $page->path = 'welcome';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Welcome',
    'name' => 'main-menu',
    'weight' => '0',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'name' => 'navigation',
      'weight' => '0',
    ),
  );
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_welcome_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'welcome';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Front page',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'region_title' => '',
        'modifier_class' => '',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_styles:panel',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8e5aa246-41c2-490e-9d1b-7e17b65bc0f4';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-ec94bfb5-14eb-48b2-aeac-8ef4e13d9059';
    $pane->panel = 'left';
    $pane->type = 'views_panes';
    $pane->subtype = 'magazine_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'style' => 'bootstrap_styles:panel',
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ec94bfb5-14eb-48b2-aeac-8ef4e13d9059';
    $display->content['new-ec94bfb5-14eb-48b2-aeac-8ef4e13d9059'] = $pane;
    $display->panels['left'][0] = 'new-ec94bfb5-14eb-48b2-aeac-8ef4e13d9059';
    $pane = new stdClass();
    $pane->pid = 'new-8349fbd8-c6b2-4335-8f59-dd4c88aee0c0';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'issues';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block_1',
      'override_title' => 1,
      'override_title_text' => 'Current Issue',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'bootstrap_styles:panel',
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8349fbd8-c6b2-4335-8f59-dd4c88aee0c0';
    $display->content['new-8349fbd8-c6b2-4335-8f59-dd4c88aee0c0'] = $pane;
    $display->panels['right'][0] = 'new-8349fbd8-c6b2-4335-8f59-dd4c88aee0c0';
    $pane = new stdClass();
    $pane->pid = 'new-fdc51a59-edc3-4dd4-871b-16eec01a7430';
    $pane->panel = 'right';
    $pane->type = 'views';
    $pane->subtype = 'events';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_pager_settings' => 0,
      'use_pager' => 0,
      'nodes_per_page' => '1',
      'pager_id' => '0',
      'offset' => '0',
      'more_link' => 0,
      'feed_icons' => 0,
      'panel_args' => 0,
      'link_to_view' => 0,
      'args' => '',
      'url' => '',
      'display' => 'block',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'modifier_class' => 'panel-primary',
        'collapsible' => 0,
        'collapsed' => 0,
        'hide_classes' => array(
          'hidden-xs' => 0,
          'hidden-sm' => 0,
          'hidden-md' => 0,
          'hidden-lg' => 0,
        ),
        'additional_classes' => array(
          'pull-left' => 0,
          'pull-right' => 0,
          'clearfix' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fdc51a59-edc3-4dd4-871b-16eec01a7430';
    $display->content['new-fdc51a59-edc3-4dd4-871b-16eec01a7430'] = $pane;
    $display->panels['right'][1] = 'new-fdc51a59-edc3-4dd4-871b-16eec01a7430';
    $pane = new stdClass();
    $pane->pid = 'new-2f6fe012-ad15-4982-ab08-3e4efe5d1b06';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 1,
              1 => 2,
              2 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'subscribe now',
      'title' => '',
      'body' => '<p><strong>Subscribe now to read all articles in </strong><em>Western Friend.</em></p>
',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'subscribe_now',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => 'subscribe-box',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2f6fe012-ad15-4982-ab08-3e4efe5d1b06';
    $display->content['new-2f6fe012-ad15-4982-ab08-3e4efe5d1b06'] = $pane;
    $display->panels['top'][0] = 'new-2f6fe012-ad15-4982-ab08-3e4efe5d1b06';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['welcome'] = $page;

  return $pages;

}
