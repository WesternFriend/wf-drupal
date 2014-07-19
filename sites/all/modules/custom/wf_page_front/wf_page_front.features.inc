<?php
/**
 * @file
 * wf_page_front.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wf_page_front_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ctools_custom_content" && $api == "ctools_content") {
    return array("version" => "1");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
}
