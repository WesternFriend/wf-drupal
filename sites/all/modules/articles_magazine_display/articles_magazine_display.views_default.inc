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
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'panel panel-default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'panel-heading panel-primary';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_authored_by']['id'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['table'] = 'field_data_field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['field'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['element_type'] = 'span';
  $handler->display->display_options['fields']['field_authored_by']['element_class'] = 'panel-body';
  $handler->display->display_options['fields']['field_authored_by']['element_label_type'] = 'span';
  $handler->display->display_options['fields']['field_authored_by']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_authored_by']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '500';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more.';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_class'] = 'panel-body';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Related Issue */
  $handler->display->display_options['fields']['field_related_issue']['id'] = 'field_related_issue';
  $handler->display->display_options['fields']['field_related_issue']['table'] = 'field_data_field_related_issue';
  $handler->display->display_options['fields']['field_related_issue']['field'] = 'field_related_issue';
  $handler->display->display_options['fields']['field_related_issue']['label'] = 'Issue';
  $handler->display->display_options['fields']['field_related_issue']['element_wrapper_class'] = 'panel-footer';
  $handler->display->display_options['fields']['field_related_issue']['settings'] = array(
    'link' => 1,
  );
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
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Departments';
  $handler->display->display_options['display_description'] = 'Articles related to the active issue.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_department',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
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
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_authored_by']['id'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['table'] = 'field_data_field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['field'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['label'] = '';
  $handler->display->display_options['fields']['field_authored_by']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_authored_by']['delta_offset'] = '0';
  /* Field: Content: Department */
  $handler->display->display_options['fields']['field_department']['id'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['table'] = 'field_data_field_department';
  $handler->display->display_options['fields']['field_department']['field'] = 'field_department';
  $handler->display->display_options['fields']['field_department']['label'] = '';
  $handler->display->display_options['fields']['field_department']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_department']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_department']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Department (field_department) */
  $handler->display->display_options['sorts']['field_department_tid']['id'] = 'field_department_tid';
  $handler->display->display_options['sorts']['field_department_tid']['table'] = 'field_data_field_department';
  $handler->display->display_options['sorts']['field_department_tid']['field'] = 'field_department_tid';
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

  /* Display: Featured articles (Front) */
  $handler = $view->new_display('panel_pane', 'Featured articles (Front)', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'Featured articles from the latest issue, for the front page.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2>Featured Articles</h2>
<p>Enjoy these recently featured articles.</p>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h2';
  $handler->display->display_options['fields']['title']['element_class'] = 'article-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_authored_by']['id'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['table'] = 'field_data_field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['field'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['element_class'] = 'authors-list';
  $handler->display->display_options['fields']['field_authored_by']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '300';
  $handler->display->display_options['fields']['body']['alter']['more_link'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['more_link_text'] = 'Read more.';
  $handler->display->display_options['fields']['body']['alter']['more_link_path'] = 'node/[nid]';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '600',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Updated date */
  $handler->display->display_options['sorts']['changed']['id'] = 'changed';
  $handler->display->display_options['sorts']['changed']['table'] = 'node';
  $handler->display->display_options['sorts']['changed']['field'] = 'changed';
  $handler->display->display_options['sorts']['changed']['order'] = 'DESC';
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
  /* Filter criterion: Content: Post date */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['operator'] = '>';
  $handler->display->display_options['filters']['created']['value']['value'] = '- 60 days';
  $handler->display->display_options['filters']['created']['value']['type'] = 'offset';

  /* Display: Teaser */
  $handler = $view->new_display('panel_pane', 'Teaser', 'magazine_article_teaser');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = '<none>';
  $handler->display->display_options['display_description'] = 'Display trimmed text.';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['alter']['max_length'] = '900';
  $handler->display->display_options['fields']['body']['alter']['trim'] = TRUE;
  $handler->display->display_options['fields']['body']['alter']['html'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );

  /* Display: Featured Articles Related to Issue */
  $handler = $view->new_display('panel_pane', 'Featured Articles Related to Issue', 'issue_featured_articles');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Featured Articles';
  $handler->display->display_options['display_description'] = 'Featured Articles related to the active issue.';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_authored_by' => 'field_authored_by',
  );
  $handler->display->display_options['row_options']['separator'] = 'by';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Author(s) */
  $handler->display->display_options['fields']['field_authored_by']['id'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['table'] = 'field_data_field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['field'] = 'field_authored_by';
  $handler->display->display_options['fields']['field_authored_by']['label'] = '';
  $handler->display->display_options['fields']['field_authored_by']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_authored_by']['type'] = 'taxonomy_term_reference_plain';
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
  $handler->display->display_options['pane_description'] = 'Featured Articles related to the active magazine issue.';
  $handler->display->display_options['allow']['use_pager'] = 'use_pager';
  $handler->display->display_options['allow']['items_per_page'] = 'items_per_page';
  $handler->display->display_options['allow']['offset'] = 'offset';
  $handler->display->display_options['allow']['link_to_view'] = 0;
  $handler->display->display_options['allow']['more_link'] = 'more_link';
  $handler->display->display_options['allow']['path_override'] = 0;
  $handler->display->display_options['allow']['title_override'] = 'title_override';
  $handler->display->display_options['allow']['exposed_form'] = 0;
  $handler->display->display_options['allow']['fields_override'] = 'fields_override';
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
