<?php
/**
 * @file
 * campuscms_feature_contact.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function campuscms_feature_contact_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:contact
  $menu_links['main-menu:contact'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'contact',
    'router_path' => 'contact',
    'link_title' => 'Contact Us',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '1',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-toolbar-administrator:admin/structure/contact
  $menu_links['menu-toolbar-administrator:admin/structure/contact'] = array(
    'menu_name' => 'menu-toolbar-administrator',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Contact Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/structure',
  );
  // Exported menu link: menu-toolbar-site-manager:admin/structure/contact
  $menu_links['menu-toolbar-site-manager:admin/structure/contact'] = array(
    'menu_name' => 'menu-toolbar-site-manager',
    'link_path' => 'admin/structure/contact',
    'router_path' => 'admin/structure/contact',
    'link_title' => 'Contact Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
    'parent_path' => 'admin/config',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact Form');
  t('Contact Us');


  return $menu_links;
}
