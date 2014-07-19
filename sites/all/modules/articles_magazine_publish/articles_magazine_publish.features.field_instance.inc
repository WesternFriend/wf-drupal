<?php
/**
 * @file
 * articles_magazine_publish.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function articles_magazine_publish_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article_magazine-body'
  $field_instances['node-article_magazine-body'] = array(
    'bundle' => 'article_magazine',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'plain_text',
          ),
        ),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'trim_length' => 900,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-article_magazine-field_authored_by'
  $field_instances['node-article_magazine-field_authored_by'] = array(
    'bundle' => 'article_magazine',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Choose one or more author(s) for this article.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_authored_by',
    'label' => 'Author(s)',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-article_magazine-field_department'
  $field_instances['node-article_magazine-field_department'] = array(
    'bundle' => 'article_magazine',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the department in which the article is published.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_department',
    'label' => 'Department',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_select',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-article_magazine-field_related_issue'
  $field_instances['node-article_magazine-field_related_issue'] = array(
    'bundle' => 'article_magazine',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the issue in which this article will appear.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'entityreference',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 5,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_related_issue',
    'label' => 'Related Issue',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'entityreference',
      'settings' => array(
        'match_operator' => 'CONTAINS',
        'path' => '',
        'size' => 60,
      ),
      'type' => 'entityreference_autocomplete',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-article_magazine-field_topics'
  $field_instances['node-article_magazine-field_topics'] = array(
    'bundle' => 'article_magazine',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter one or more topics related to this article.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(
          'edit' => array(
            'editor' => 'form',
          ),
        ),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_topics',
    'label' => 'Topics',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'taxonomy_term-authors-field_notes'
  $field_instances['taxonomy_term-authors-field_notes'] = array(
    'bundle' => 'authors',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add brief bio for author of article. (Give year bio was written between parentheses at end of note.)',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'field_notes',
    'label' => 'Notes',
    'readmore_behaviour' => 'default',
    'required' => 0,
    'settings' => array(
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
      ),
      'type' => 'text_textarea',
      'weight' => 31,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add brief bio for author of article. (Give year bio was written between parentheses at end of note.)');
  t('Author(s)');
  t('Body');
  t('Choose one or more author(s) for this article.');
  t('Department');
  t('Enter one or more topics related to this article.');
  t('Notes');
  t('Related Issue');
  t('Select the department in which the article is published.');
  t('Select the issue in which this article will appear.');
  t('Topics');

  return $field_instances;
}
