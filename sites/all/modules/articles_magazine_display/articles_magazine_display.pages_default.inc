<?php
/**
 * @file
 * articles_magazine_display.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function articles_magazine_display_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article (Subscriber)',
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
        'keyword' => 'article_author',
        'name' => 'entity_from_field:field_authored_by-node-user',
        'delta' => '0',
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
              'article_magazine' => 'article_magazine',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '9',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '3',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-lg',
        'column_size' => '12',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '35aca2ad-4716-43c3-8edf-38f2ec8f0cbb';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-f9e51c37-6689-439e-80d1-6495a19f6245';
    $pane->panel = 'left';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_related_issue';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'above',
      'formatter' => 'entityreference_entity_view',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'view_mode' => 'default',
        'links' => 1,
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
    $pane->uuid = 'f9e51c37-6689-439e-80d1-6495a19f6245';
    $display->content['new-f9e51c37-6689-439e-80d1-6495a19f6245'] = $pane;
    $display->panels['left'][0] = 'new-f9e51c37-6689-439e-80d1-6495a19f6245';
    $pane = new stdClass();
    $pane->pid = 'new-0a0a7bb6-ab1f-4996-8720-d46302cf5b93';
    $pane->panel = 'right';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_department';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->uuid = '0a0a7bb6-ab1f-4996-8720-d46302cf5b93';
    $display->content['new-0a0a7bb6-ab1f-4996-8720-d46302cf5b93'] = $pane;
    $display->panels['right'][0] = 'new-0a0a7bb6-ab1f-4996-8720-d46302cf5b93';
    $pane = new stdClass();
    $pane->pid = 'new-8e46c206-a7db-4c28-bc8a-941aafd2bd25';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_authored_by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e46c206-a7db-4c28-bc8a-941aafd2bd25';
    $display->content['new-8e46c206-a7db-4c28-bc8a-941aafd2bd25'] = $pane;
    $display->panels['top'][0] = 'new-8e46c206-a7db-4c28-bc8a-941aafd2bd25';
    $pane = new stdClass();
    $pane->pid = 'new-d88866ca-c38a-42be-afec-b846051bdf2c';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_topics';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd88866ca-c38a-42be-afec-b846051bdf2c';
    $display->content['new-d88866ca-c38a-42be-afec-b846051bdf2c'] = $pane;
    $display->panels['top'][1] = 'new-d88866ca-c38a-42be-afec-b846051bdf2c';
    $pane = new stdClass();
    $pane->pid = 'new-8ff4e168-e796-4dae-8fe0-ee0aec8fd0e2';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8ff4e168-e796-4dae-8fe0-ee0aec8fd0e2';
    $display->content['new-8ff4e168-e796-4dae-8fe0-ee0aec8fd0e2'] = $pane;
    $display->panels['top'][2] = 'new-8ff4e168-e796-4dae-8fe0-ee0aec8fd0e2';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Article (Archive)',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article_magazine' => 'article_magazine',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'flag_is_flagged:node',
          'settings' => array(
            'flag_name' => 'archived',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-sm',
        'column_size' => '8',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '938bea26-501d-4a01-8c03-5b078c1f6932';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-d51d5eca-0526-4547-9d36-e165f964ce96';
    $pane->panel = 'top';
    $pane->type = 'entity_view';
    $pane->subtype = 'node';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
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
    $pane->uuid = 'd51d5eca-0526-4547-9d36-e165f964ce96';
    $display->content['new-d51d5eca-0526-4547-9d36-e165f964ce96'] = $pane;
    $display->panels['top'][0] = 'new-d51d5eca-0526-4547-9d36-e165f964ce96';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-d51d5eca-0526-4547-9d36-e165f964ce96';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Article (Default)',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article_magazine' => 'article_magazine',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Articles
%node:title',
    'panels_breadcrumbs_paths' => 'articles
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
        'region_title' => '',
        'modifier_class' => 'panel-info',
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
        'column_size' => '10',
        'offset_type' => 'col-sm-offset',
        'offset_size' => '0',
      ),
      'right' => array(
        'column_type' => 'col-sm',
        'column_size' => '2',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '2',
      ),
    ),
    'left' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'bootstrap_region',
    ),
    'top' => array(
      'style' => 'bootstrap_styles:panel',
    ),
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = '%node:title';
  $display->uuid = '3076177d-2560-443f-bef5-bca7313af649';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b58c56ad-b7e8-46a4-8b3b-300ed4e9b5b9';
    $pane->panel = 'right';
    $pane->type = 'views_panes';
    $pane->subtype = 'issue-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link_to_view' => 1,
      'more_link' => 0,
      'use_pager' => 0,
      'pager_id' => '0',
      'items_per_page' => '1',
      'offset' => '0',
      'fields_override' => array(
        'field_cover_image' => 1,
      ),
      'override_title' => 1,
      'override_title_text' => '%title',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b58c56ad-b7e8-46a4-8b3b-300ed4e9b5b9';
    $display->content['new-b58c56ad-b7e8-46a4-8b3b-300ed4e9b5b9'] = $pane;
    $display->panels['right'][0] = 'new-b58c56ad-b7e8-46a4-8b3b-300ed4e9b5b9';
    $pane = new stdClass();
    $pane->pid = 'new-0538fe82-41bb-4a82-b443-461407ca9317';
    $pane->panel = 'top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => '',
      'class' => 'article-title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0538fe82-41bb-4a82-b443-461407ca9317';
    $display->content['new-0538fe82-41bb-4a82-b443-461407ca9317'] = $pane;
    $display->panels['top'][0] = 'new-0538fe82-41bb-4a82-b443-461407ca9317';
    $pane = new stdClass();
    $pane->pid = 'new-173e28a5-206d-4179-b6de-cf4b5524bf32';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_authored_by';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => 'Author(s)',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '173e28a5-206d-4179-b6de-cf4b5524bf32';
    $display->content['new-173e28a5-206d-4179-b6de-cf4b5524bf32'] = $pane;
    $display->panels['top'][1] = 'new-173e28a5-206d-4179-b6de-cf4b5524bf32';
    $pane = new stdClass();
    $pane->pid = 'new-855b0468-50f3-48f1-9bac-271590c00c0a';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_department';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'clearfix',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '855b0468-50f3-48f1-9bac-271590c00c0a';
    $display->content['new-855b0468-50f3-48f1-9bac-271590c00c0a'] = $pane;
    $display->panels['top'][2] = 'new-855b0468-50f3-48f1-9bac-271590c00c0a';
    $pane = new stdClass();
    $pane->pid = 'new-4cd41526-6ba6-4bea-9b2d-6c0961bb6472';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'magazine_articles-magazine_article_teaser';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
              2 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
        1 => array(
          'name' => 'flag_is_flagged:node',
          'settings' => array(
            'flag_name' => 'archived',
            'flag_user' => 'any',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
        2 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Article NOT promoted to front page',
            'php' => 'return $contexts["argument_entity_id:node_1"]->data->promote == 1;',
          ),
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    );
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
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4cd41526-6ba6-4bea-9b2d-6c0961bb6472';
    $display->content['new-4cd41526-6ba6-4bea-9b2d-6c0961bb6472'] = $pane;
    $display->panels['top'][3] = 'new-4cd41526-6ba6-4bea-9b2d-6c0961bb6472';
    $pane = new stdClass();
    $pane->pid = 'new-26a093a8-c70b-49ff-b4c7-77ac8d6af67a';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'subscribe_now';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '26a093a8-c70b-49ff-b4c7-77ac8d6af67a';
    $display->content['new-26a093a8-c70b-49ff-b4c7-77ac8d6af67a'] = $pane;
    $display->panels['top'][4] = 'new-26a093a8-c70b-49ff-b4c7-77ac8d6af67a';
    $pane = new stdClass();
    $pane->pid = 'new-e79865fd-d71f-4d0d-907b-32a9184c2594';
    $pane->panel = 'top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:body';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'role',
          'settings' => array(
            'rids' => array(
              0 => 4,
              1 => 6,
              2 => 3,
            ),
          ),
          'context' => 'logged-in-user',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'flag_is_flagged:node',
          'settings' => array(
            'flag_name' => 'archived',
            'flag_user' => 'any',
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'php',
          'settings' => array(
            'description' => 'Node Promoted to Front Page',
            'php' => '/* Check to see if the node is set to promoted, indicated by "1" */
return $contexts["argument_entity_id:node_1"]->data->promote == 1;

/* Testing code */
/*drupal_set_message("Promoted:<br />".$contexts["argument_entity_id:node_1"]->data->promote);*/
/*drupal_set_message("Contexts:<br /><pre>".print_r($contexts, 1)."</pre>");*/',
          ),
          'not' => FALSE,
        ),
      ),
      'logic' => 'or',
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e79865fd-d71f-4d0d-907b-32a9184c2594';
    $display->content['new-e79865fd-d71f-4d0d-907b-32a9184c2594'] = $pane;
    $display->panels['top'][5] = 'new-e79865fd-d71f-4d0d-907b-32a9184c2594';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  return $export;
}
