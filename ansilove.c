/* ansilove extension for PHP (c) 2025 Abi */

#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "php.h"
#include "ext/standard/info.h"
#include "Zend/zend_enum.h"
#include "Zend/zend_exceptions.h"

#include "ansilove_arginfo.h"
#include "class.h"
#include "enum.h"
#include "php_ansilove.h"

#include <ansilove.h>

/* For compatibility with older PHP versions */
#ifndef ZEND_PARSE_PARAMETERS_NONE
#define ZEND_PARSE_PARAMETERS_NONE() \
	ZEND_PARSE_PARAMETERS_START(0, 0) \
	ZEND_PARSE_PARAMETERS_END()
#endif

zend_class_entry *ansilove_ce;
zend_class_entry *ansilove_exception_ce;
zend_object_handlers ansilove_object_handlers;

PHP_MINIT_FUNCTION(ansilove)
{
    register_enum_font();
    register_enum_mode();
    ansilove_ce = register_class_AnsiLove();
    ansilove_exception_ce = register_class_AnsiLoveException(zend_ce_exception);

    // Set up custom object handlers
    memcpy(&ansilove_object_handlers, zend_get_std_object_handlers(), sizeof(zend_object_handlers));
    ansilove_object_handlers.offset = XtOffsetOf(ansilove_object, std);
    ansilove_object_handlers.free_obj = ansilove_free_object;

    ansilove_ce->create_object = ansilove_create_object;

    return SUCCESS;
}

/* {{{ PHP_RINIT_FUNCTION */
PHP_RINIT_FUNCTION(ansilove)
{
#if defined(ZTS) && defined(COMPILE_DL_ANSILOVE)
	ZEND_TSRMLS_CACHE_UPDATE();
#endif

    return SUCCESS;
}

/* }}} */

/* {{{ PHP_MINFO_FUNCTION */
PHP_MINFO_FUNCTION(ansilove)
{
    php_info_print_table_start();
    php_info_print_table_row(2, "ansilove support", "enabled");
    php_info_print_table_row(2, "libansilove", ANSILOVE_VERSION);
    php_info_print_table_end();
}

/* }}} */

/* {{{ ansilove_module_entry */
zend_module_entry ansilove_module_entry = {
    STANDARD_MODULE_HEADER,
    "ansilove", /* Extension name */
    NULL, /* zend_function_entry */
    PHP_MINIT(ansilove), /* PHP_MINIT - Module initialization */
    NULL, /* PHP_MSHUTDOWN - Module shutdown */
    PHP_RINIT(ansilove), /* PHP_RINIT - Request initialization */
    NULL, /* PHP_RSHUTDOWN - Request shutdown */
    PHP_MINFO(ansilove), /* PHP_MINFO - Module info */
    PHP_ANSILOVE_VERSION, /* Version */
    STANDARD_MODULE_PROPERTIES
};
/* }}} */

#ifdef COMPILE_DL_ANSILOVE
# ifdef ZTS
ZEND_TSRMLS_CACHE_DEFINE()
# endif
ZEND_GET_MODULE(ansilove)
#endif
