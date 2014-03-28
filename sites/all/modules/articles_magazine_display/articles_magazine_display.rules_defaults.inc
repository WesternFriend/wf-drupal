<?php
/**
 * @file
 * articles_magazine_display.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function articles_magazine_display_default_rules_configuration() {
  $items = array();
  $items['rules_subscriber_article_access'] = entity_import('rules_config', '{ "rules_subscriber_article_access" : {
      "LABEL" : "Subscriber Article Access",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "Articles" ],
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_view--magazine_article" : { "bundle" : "magazine_article" } },
      "IF" : [
        { "NOT user_has_role" : {
            "account" : [ "site:current-user" ],
            "roles" : { "value" : { "4" : "4" } }
          }
        }
      ],
      "DO" : []
    }
  }');
  return $items;
}
