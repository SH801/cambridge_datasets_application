<?php

/**
 * @file
 * cambridge_datasets.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function cambridge_datasets_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_admin:administration.
  $menu_links['main-menu_admin:administration'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'administration',
    'router_path' => 'administration',
    'link_title' => 'Admin',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_admin:administration',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_all-requests:requests_all.
  $menu_links['main-menu_all-requests:requests_all'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'requests_all',
    'router_path' => 'requests_all',
    'link_title' => 'All Requests',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_all-requests:requests_all',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dataset-collections:collections.
  $menu_links['main-menu_dataset-collections:collections'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'collections',
    'router_path' => 'collections',
    'link_title' => 'Dataset Collections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dataset-collections:collections',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_edit-requests:requests_admin.
  $menu_links['main-menu_edit-requests:requests_admin'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'requests_admin',
    'router_path' => 'requests_admin',
    'link_title' => 'Edit Requests',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_edit-requests:requests_admin',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_events:events.
  $menu_links['main-menu_events:events'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'events',
    'router_path' => 'events',
    'link_title' => 'Events',
    'options' => array(
      'identifier' => 'main-menu_events:events',
    ),
    'module' => 'system',
    'hidden' => 1,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: main-menu_import-collection:cambridge_datasets/import.
  $menu_links['main-menu_import-collection:cambridge_datasets/import'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'cambridge_datasets/import',
    'router_path' => 'cambridge_datasets/import',
    'link_title' => 'Import Collection',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-collection:cambridge_datasets/import',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_mail-queue:mail-queue.
  $menu_links['main-menu_mail-queue:mail-queue'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'mail-queue',
    'router_path' => 'mail-queue',
    'link_title' => 'Mail Queue',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_mail-queue:mail-queue',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: main-menu_pending-requests:requests.
  $menu_links['main-menu_pending-requests:requests'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'requests',
    'router_path' => 'requests',
    'link_title' => 'Pending Requests',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pending-requests:requests',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Admin');
  t('All Requests');
  t('Dataset Collections');
  t('Edit Requests');
  t('Events');
  t('Import Collection');
  t('Mail Queue');
  t('Pending Requests');

  return $menu_links;
}
