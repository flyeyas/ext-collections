//
// ext-collections/collections.c
//
// @Author CismonX
//

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <php.h>
#include <php_ini.h>
#include <ext/standard/info.h>

#include "php_collections.h"

zend_string* collection_property_name;
zend_string* pair_first_name;
zend_string* pair_second_name;

zend_class_entry* collections_collection_ce;
zend_class_entry* collections_pair_ce;

PHP_MINIT_FUNCTION(collections)
{
    collection_property_name = zend_string_init("_a", strlen("_a"), 1);
    pair_first_name = zend_string_init("first", strlen("first"), 1);
    pair_second_name = zend_string_init("second", strlen("second"), 1);
    zend_class_entry collection_ce;
    INIT_CLASS_ENTRY_EX(collection_ce, "Collection", strlen("Collection"), collection_methods);
    collections_collection_ce = zend_register_internal_class(&collection_ce);
    zend_declare_property_null(collections_collection_ce, "_a", strlen("_a"), ZEND_ACC_PRIVATE);
    zend_class_entry pair_ce;
    INIT_CLASS_ENTRY_EX(pair_ce, "Pair", strlen("Pair"), pair_methods);
    collections_pair_ce = zend_register_internal_class(&pair_ce);
    zend_declare_property_null(collections_pair_ce, "first", strlen("first"), ZEND_ACC_PUBLIC);
    zend_declare_property_null(collections_pair_ce, "second", strlen("second"), ZEND_ACC_PUBLIC);
    return SUCCESS;
}

PHP_MSHUTDOWN_FUNCTION(collections)
{
    zend_string_release(collection_property_name);
    zend_string_release(pair_first_name);
    zend_string_release(pair_second_name);
    return SUCCESS;
}

PHP_RINIT_FUNCTION(collections)
{
#if defined(COMPILE_DL_COLLECTIONS) && defined(ZTS)
    ZEND_TSRMLS_CACHE_UPDATE();
#endif
    return SUCCESS;
}

PHP_MINFO_FUNCTION(collections)
{
    php_info_print_table_start();
    php_info_print_table_header(2, "collections support", "enabled");
    php_info_print_table_end();
}

zend_module_entry collections_module_entry = {
    STANDARD_MODULE_HEADER,
    "collections",
    NULL,
    PHP_MINIT(collections),
    PHP_MSHUTDOWN(collections),
    PHP_RINIT(collections),
    NULL,
    PHP_MINFO(collections),
    PHP_COLLECTIONS_VERSION,
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_COLLECTIONS
#ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
#endif
ZEND_GET_MODULE(collections)
#endif