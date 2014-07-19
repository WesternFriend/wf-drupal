<?php
/**
 * @file
 * pages_magazine.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function pages_magazine_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'magazine';
  $page->task = 'page';
  $page->admin_title = 'Magazine';
  $page->admin_description = 'Landing page for the magazine section.';
  $page->path = 'magazine';
  $page->access = array();
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Magazine',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_magazine_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'magazine';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => 1,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'panels_breadcrumbs_state' => 1,
    'panels_breadcrumbs_titles' => 'Magazine',
    'panels_breadcrumbs_paths' => '<none>',
    'panels_breadcrumbs_home' => 1,
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_twocol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => array(),
      'top' => array(
        'column_type' => 'col',
        'column_size' => '12',
        'offset_type' => 'col-offset',
        'offset_size' => '0',
      ),
      'bottom' => array(),
      'middle' => array(
        'column_type' => 'col-sm',
        'column_size' => '4',
        'offset_type' => 'col-lg-offset',
        'offset_size' => '0',
      ),
      'left' => NULL,
      'right' => NULL,
    ),
    'top' => array(
      'style' => 'bootstrap_region',
    ),
    'left' => array(
      'style' => 'default',
    ),
    'middle' => array(
      'style' => 'bootstrap_region',
    ),
    'right' => array(
      'style' => 'default',
    ),
    'style' => 'bootstrap_region',
    'bottom' => array(
      'style' => 'bootstrap_region',
    ),
  );
  $display->cache = array();
  $display->title = 'Magazine';
  $display->uuid = 'a3d30ba4-fad8-4b22-835c-55c07471c097';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-75a61219-0733-4e84-873b-93024c710b2d';
    $pane->panel = 'left';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '',
      'format' => 'basic',
      'substitute' => TRUE,
      'name' => 'reader_forum',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bootstrap_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '75a61219-0733-4e84-873b-93024c710b2d';
    $display->content['new-75a61219-0733-4e84-873b-93024c710b2d'] = $pane;
    $display->panels['left'][0] = 'new-75a61219-0733-4e84-873b-93024c710b2d';
    $pane = new stdClass();
    $pane->pid = 'new-ba4da42a-e834-4d23-9258-cef8765a02b6';
    $pane->panel = 'right';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Advertise',
      'title' => '',
      'body' => '<a href="/advertise" title="advertise"><button type="button" class="btn btn-info btn-lg">Advertise in <em>Western Friend</em>.</button></a>',
      'format' => 'full_html',
      'substitute' => TRUE,
      'name' => 'advertise',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bootstrap_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ba4da42a-e834-4d23-9258-cef8765a02b6';
    $display->content['new-ba4da42a-e834-4d23-9258-cef8765a02b6'] = $pane;
    $display->panels['right'][0] = 'new-ba4da42a-e834-4d23-9258-cef8765a02b6';
    $pane = new stdClass();
    $pane->pid = 'new-68ea043a-1600-42f6-abbc-bf0aef48ad7c';
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
      'settings' => array(
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
      'style' => 'bootstrap_styles:panel',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '68ea043a-1600-42f6-abbc-bf0aef48ad7c';
    $display->content['new-68ea043a-1600-42f6-abbc-bf0aef48ad7c'] = $pane;
    $display->panels['top'][0] = 'new-68ea043a-1600-42f6-abbc-bf0aef48ad7c';
    $pane = new stdClass();
    $pane->pid = 'new-1ba60d8b-ab0d-407a-abdc-52a3b1df39f5';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Current Issues of the Magazine',
      'body' => '<p>Subscribers have full access to all articles in <em>Western Friend.</em> Limited access to current issues is available to non-subscribers.</p>
',
      'format' => 'advanced',
      'substitute' => TRUE,
      'name' => 'access_current_issues',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(),
      'style' => 'bootstrap_region',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '1ba60d8b-ab0d-407a-abdc-52a3b1df39f5';
    $display->content['new-1ba60d8b-ab0d-407a-abdc-52a3b1df39f5'] = $pane;
    $display->panels['top'][1] = 'new-1ba60d8b-ab0d-407a-abdc-52a3b1df39f5';
    $pane = new stdClass();
    $pane->pid = 'new-a44173d3-2f04-4774-9e34-a8e86dba0125';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'issues-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'a44173d3-2f04-4774-9e34-a8e86dba0125';
    $display->content['new-a44173d3-2f04-4774-9e34-a8e86dba0125'] = $pane;
    $display->panels['top'][2] = 'new-a44173d3-2f04-4774-9e34-a8e86dba0125';
    $pane = new stdClass();
    $pane->pid = 'new-dfdee63e-0792-4de8-b5c3-0d4b82a68d91';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => 'Archived Issues of the Magazine',
      'body' => '<p>All readers have full access to all articles of <em>Western Friend</em> that become available in our new online archive - Going back to 1929!</p>
',
      'format' => 'advanced',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'dfdee63e-0792-4de8-b5c3-0d4b82a68d91';
    $display->content['new-dfdee63e-0792-4de8-b5c3-0d4b82a68d91'] = $pane;
    $display->panels['top'][3] = 'new-dfdee63e-0792-4de8-b5c3-0d4b82a68d91';
    $pane = new stdClass();
    $pane->pid = 'new-15f704c5-9e1f-492b-b8ba-35befd7b0c64';
    $pane->panel = 'top';
    $pane->type = 'views_panes';
    $pane->subtype = 'issues-panel_pane_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
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
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '15f704c5-9e1f-492b-b8ba-35befd7b0c64';
    $display->content['new-15f704c5-9e1f-492b-b8ba-35befd7b0c64'] = $pane;
    $display->panels['top'][4] = 'new-15f704c5-9e1f-492b-b8ba-35befd7b0c64';
    $pane = new stdClass();
    $pane->pid = 'new-ff1f7d73-a147-4655-ab32-2aded88fd184';
    $pane->panel = 'top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Magazine Description',
      'title' => '',
      'body' => '<h2>Future Issues of the Magazine</h2>
<p>Authors, poets, photographers, and artists in the West: Do you have something to contribute to the themes we plan to consider?</p>

<h2>Albums of <em>Western Friend</em> Media</h2>

<p><span style="background-color:transparent; color:rgb(0, 0, 0); font-family:garamond; font-size:19px">Lots of photos of Friends in the West, plus audio recordings, and lots more to come.</span></p>
',
      'format' => 'full_html',
      'substitute' => TRUE,
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'bootstrap_region',
      'settings' => array(),
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '.col-lg-10',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'ff1f7d73-a147-4655-ab32-2aded88fd184';
    $display->content['new-ff1f7d73-a147-4655-ab32-2aded88fd184'] = $pane;
    $display->panels['top'][5] = 'new-ff1f7d73-a147-4655-ab32-2aded88fd184';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['magazine'] = $page;

  return $pages;

}
