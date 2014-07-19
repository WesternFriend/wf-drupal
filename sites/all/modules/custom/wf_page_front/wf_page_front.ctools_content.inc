<?php
/**
 * @file
 * wf_page_front.ctools_content.inc
 */

/**
 * Implements hook_default_ctools_custom_content().
 */
function wf_page_front_default_ctools_custom_content() {
  $export = array();

  $content = new stdClass();
  $content->disabled = FALSE; /* Edit this to true to make a default content disabled initially */
  $content->api_version = 1;
  $content->name = 'subscribe_now';
  $content->admin_title = 'subscribe now';
  $content->admin_description = 'Urge visitors to subscribe.';
  $content->category = 'subscribe';
  $content->settings = array(
    'admin_title' => 'subscribe now',
    'title' => '',
    'body' => '<p style="margin: 0;"><a href="http://wf.pymcloud.us/civicrm/contribute/transact?reset=1&amp;id=1" ><button id="subscriber-login" class="btn btn-primary btn-large" style="float: right"><i class="icon-white icon-heart"></i> Subscribe Now</button></a></p>
<p style="margin-bottom: 0;"><strong><a href="http://wf.pymcloud.us/civicrm/contribute/transact?reset=1&amp;id=1" style="text-decoration: underline;">Subscribe now</a> to read all articles in </strong><em style="font-size: 1.1em;">Western Friend.</em></p>
',
    'format' => 'full_html',
    'substitute' => 1,
  );
  $export['subscribe_now'] = $content;

  return $export;
}
