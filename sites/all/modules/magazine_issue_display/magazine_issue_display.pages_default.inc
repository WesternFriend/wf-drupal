<?php
/**
 * @file
 * magazine_issue_display.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function magazine_issue_display_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Issue',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'User from Node (on Node: Authored by [field_authored_by])',
        'keyword' => 'user',
        'name' => 'entity_from_field:field_authored_by-node-user',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Related Issue [field_related_issue])',
        'keyword' => 'related_article',
        'name' => 'entity_from_field:field_related_issue-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'magazine_issue' => 'magazine_issue',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Magazine
%node:title',
    'panels_breadcrumbs_paths' => 'magazine
<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => NULL,
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4091c30c-952a-4f1e-b495-88733dfe57e2';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-81d30267-61aa-4581-938f-6588dbfc48cd';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_cover_image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'image',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'image_style' => 'medium',
        'image_link' => '',
      ),
      'context' => 'argument_entity_id:node_1',
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
    $pane->uuid = '81d30267-61aa-4581-938f-6588dbfc48cd';
    $display->content['new-81d30267-61aa-4581-938f-6588dbfc48cd'] = $pane;
    $display->panels['left'][0] = 'new-81d30267-61aa-4581-938f-6588dbfc48cd';
    $pane = new stdClass();
    $pane->pid = 'new-dcac3f17-1168-4790-b3f8-f78b1f15cf55';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'magazine_articles-issue_featured_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '0',
      'offset' => '0',
      'fields_override' => array(
        'title' => 1,
        'field_authored_by' => 1,
      ),
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
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
          'clearfix' => 'clearfix',
          'pull-left' => 0,
          'pull-right' => 0,
        ),
      ),
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'dcac3f17-1168-4790-b3f8-f78b1f15cf55';
    $display->content['new-dcac3f17-1168-4790-b3f8-f78b1f15cf55'] = $pane;
    $display->panels['right'][0] = 'new-dcac3f17-1168-4790-b3f8-f78b1f15cf55';
    $pane = new stdClass();
    $pane->pid = 'new-0ad3256f-ca75-4697-b8c4-165204478005';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'magazine_articles-related_articles';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '0ad3256f-ca75-4697-b8c4-165204478005';
    $display->content['new-0ad3256f-ca75-4697-b8c4-165204478005'] = $pane;
    $display->panels['right'][1] = 'new-0ad3256f-ca75-4697-b8c4-165204478005';
    $pane = new stdClass();
    $pane->pid = 'new-872a9353-e0c8-4f9f-a960-d4e1972552e7';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'issue-issue_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '872a9353-e0c8-4f9f-a960-d4e1972552e7';
    $display->content['new-872a9353-e0c8-4f9f-a960-d4e1972552e7'] = $pane;
    $display->panels['top'][0] = 'new-872a9353-e0c8-4f9f-a960-d4e1972552e7';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  return $export;
}
