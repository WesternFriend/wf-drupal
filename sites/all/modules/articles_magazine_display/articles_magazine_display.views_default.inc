<?php
/**
 * @file
 * articles_magazine_display.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function articles_magazine_display_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'magazine_articles';
  $view->description = 'Article related views.';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Magazine Articles';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Articles';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article_magazine' => 'article_magazine',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'articles';

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'articles.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Featured article */
  $handler = $view->new_display('panel_pane', 'Featured article', 'featured_article');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Article';
  $handler->display->display_options['display_description'] = 'One featured article for the front page.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'article_magazine' => 'article_magazine',
  );
  /* Filter criterion: Content: Promoted to front page */
  $handler->display->display_options['filters']['promote']['id'] = 'promote';
  $handler->display->display_options['filters']['promote']['table'] = 'node';
  $handler->display->display_options['filters']['promote']['field'] = 'promote';
  $handler->display->display_options['filters']['promote']['value'] = '1';

  /* Display: Articles Related to Issue */
  $handler = $view->new_display('panel_pane', 'Articles Related to Issue', 'related_articles');
  $handler->display->display_options['display_description'] = 'Articles related to the active issue.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_authored_by' => 'field_authored_by',
  );
  $handler->display->display_options['row_options']['separator'] = ' by ';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Authored by */
  $handler->display->display_options['fields']['field_authored_by']['id'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['table'] = 'field_data_field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['field'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['label'] = '';
  $handler->display->display_options['fields']['field_authored_by']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_authored_by']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Related issue */
  $handler->display->display_options['arguments']['field_related_issue_target_id']['id'] = 'field_related_issue_target_id';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['table'] = 'field_data_field_related_issue';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['field'] = 'field_related_issue_target_id';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['ui_name'] = 'Related issue';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_related_issue_target_id']['validate']['type'] = 'node';
  $handler->display->display_options['arguments']['field_related_issue_target_id']['validate_options']['types'] = array(
    'magazine_issue' => 'magazine_issue',
  );
  $handler->display->display_options['pane_description'] = 'Articles related to the active magazine issue.';
  $handler->display->display_options['argument_input'] = array(
    'field_related_issue_target_id' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Related issue',
    ),
  );
  $export['magazine_articles'] = $view;

  return $export;
}
