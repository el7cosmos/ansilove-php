/* ansilove extension for PHP (c) 2025 Abi */

#ifndef PHP_ANSILOVE_H
# define PHP_ANSILOVE_H

extern zend_object_handlers ansilove_object_handlers;

extern zend_class_entry *ansilove_exception_ce;

extern zend_module_entry ansilove_module_entry;

# define phpext_ansilove_ptr &ansilove_module_entry

# define PHP_ANSILOVE_VERSION "0.1.0"

# if defined(ZTS) && defined(COMPILE_DL_ANSILOVE)
ZEND_TSRMLS_CACHE_EXTERN()
# endif

#endif	/* PHP_ANSILOVE_H */
