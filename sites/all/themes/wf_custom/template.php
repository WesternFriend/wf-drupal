<?php
/**
 * Override or insert variables into the html template.
 */
function wf_custom_process_html(&$vars) {
        // Hook into color.module
        if (module_exists('color')) {
       	_color_html_alter($vars);
      	}
}
?>
