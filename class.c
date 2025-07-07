#include "php.h"
#include "Zend/zend_enum.h"
#include "Zend/zend_exceptions.h"

#include "class.h"
#include "php_ansilove.h"

#include <ansilove.h>

static ansilove_object *ansilove_from_obj(zend_object *obj)
{
    return (ansilove_object*)((char*)(obj) - XtOffsetOf(ansilove_object, std));
}

zend_object *ansilove_create_object(zend_class_entry *class_type)
{
    ansilove_object *intern = zend_object_alloc(sizeof(ansilove_object), class_type);

    zend_object_std_init(&intern->std, class_type);
    object_properties_init(&intern->std, class_type);

    intern->std.handlers = &ansilove_object_handlers;

    // Initialize ansilove context and options
    ansilove_init(&intern->ctx, &intern->options);

    return &intern->std;
}

void ansilove_free_object(zend_object *object)
{
    ansilove_object *intern = ansilove_from_obj(object);

    // Clean up ansilove context
    ansilove_clean(&intern->ctx);
    zend_object_std_dtor(&intern->std);
}

static zval *setter(const zend_execute_data *execute_data, zend_object *obj, const char *property_name)
{
    zval *value;
    if (zend_parse_parameters(ZEND_NUM_ARGS(), "z", &value) == FAILURE) return value;
    zend_update_property(obj->ce, obj, property_name, strlen(property_name), value);
    return value;
}

static zend_bool setter_bool(const zend_execute_data *execute_data, zend_object *obj, const char *property_name)
{
    zend_bool value;
    if (zend_parse_parameters(ZEND_NUM_ARGS(), "b", &value) == FAILURE) return false;
    zend_update_property_bool(obj->ce, obj, property_name, strlen(property_name), value);
    return value;
}

static zend_long setter_long(const zend_execute_data *execute_data, zend_object *obj, const char *property_name)
{
    zend_long value;
    if (zend_parse_parameters(ZEND_NUM_ARGS(), "l", &value) == FAILURE) return 0;
    zend_update_property_long(obj->ce, obj, property_name, strlen(property_name), value);
    return value;
}

static zval *read_property(zend_object *obj, const char *name, zval *rv)
{
    return zend_read_property(obj->ce, obj, name, strlen(name), 1, rv);
}

#define RETURN_LONG_PROP(name) RETURN_LONG(Z_LVAL_P(read_property(Z_OBJ_P(getThis()), #name, return_value)))
#define RETURN_OBJ_PROP(name) RETURN_OBJ(Z_OBJ_P(read_property(Z_OBJ_P(getThis()), #name, return_value)))

PHP_METHOD(AnsiLove, __construct)
{
    char *input;
    size_t input_len;

    if (zend_parse_parameters(ZEND_NUM_ARGS(), "p", &input, &input_len) == FAILURE) return;

    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    zend_update_property_stringl(obj->ce, obj, "input", strlen("input"), input, input_len);

    /* Load the input file */
    if (ansilove_loadfile(&intern->ctx, input) != 0)
    {
        zend_throw_exception(ansilove_exception_ce, ansilove_error(&intern->ctx), intern->ctx.error);
        ansilove_clean(&intern->ctx);
        RETURN_THROWS();
    }
}

PHP_METHOD(AnsiLove, isDiz) { RETURN_BOOL(ansilove_from_obj(Z_OBJ_P(getThis()))->options.diz); }
PHP_METHOD(AnsiLove, setDiz)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    intern->options.diz = setter_bool(execute_data, obj, "diz");
    RETURN_OBJ_COPY(obj);
}

PHP_METHOD(AnsiLove, isDos) { RETURN_BOOL(ansilove_from_obj(Z_OBJ_P(getThis()))->options.dos); }
PHP_METHOD(AnsiLove, setDos)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    intern->options.dos = setter_bool(execute_data, obj, "dos");
    RETURN_OBJ_COPY(obj);
}

PHP_METHOD(AnsiLove, isIceColors) { RETURN_BOOL(ansilove_from_obj(Z_OBJ_P(getThis()))->options.icecolors); }
PHP_METHOD(AnsiLove, setIceColors)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    intern->options.icecolors = setter_bool(execute_data, obj, "iceColors");
    RETURN_OBJ_COPY(obj);
}

PHP_METHOD(AnsiLove, isTrueColor) { RETURN_BOOL(ansilove_from_obj(Z_OBJ_P(getThis()))->options.truecolor); }
PHP_METHOD(AnsiLove, setTrueColor)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    intern->options.truecolor = setter_bool(execute_data, obj, "trueColor");
    RETURN_OBJ_COPY(obj);
}

PHP_METHOD(AnsiLove, getColumns) { RETURN_LONG_PROP(columns); }
PHP_METHOD(AnsiLove, setColumns)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    const zend_long value = setter_long(execute_data, obj, "columns");
    if (value != 0) intern->options.columns = (int16_t)value;
    RETURN_OBJ_COPY(obj);
}

PHP_METHOD(AnsiLove, getFont) { RETURN_OBJ_PROP(font); }
PHP_METHOD(AnsiLove, setFont)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    const zval *value = setter(execute_data, obj, "font");
    intern->options.font = zval_get_long(zend_enum_fetch_case_value(Z_OBJ_P(value)));
    RETURN_OBJ_COPY(obj);
}

PHP_METHOD(AnsiLove, getBits) { RETURN_LONG_PROP(bits); }
PHP_METHOD(AnsiLove, setBits)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    const zend_long value = setter_long(execute_data, obj, "bits");
    if (value != 0) intern->options.bits = value;
    RETURN_OBJ_COPY(obj);
}

PHP_METHOD(AnsiLove, getMode) { RETURN_OBJ_PROP(mode); }
PHP_METHOD(AnsiLove, setMode)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    const zval *value = setter(execute_data, obj, "mode");
    intern->options.mode = zval_get_long(zend_enum_fetch_case_value(Z_OBJ_P(value)));
    RETURN_OBJ_COPY(obj);
}

PHP_METHOD(AnsiLove, getScaleFactor) { RETURN_LONG_PROP(scaleFactor); }
PHP_METHOD(AnsiLove, setScaleFactor)
{
    zend_object *obj = Z_OBJ_P(getThis());
    ansilove_object *intern = ansilove_from_obj(obj);
    const zend_long value = setter_long(execute_data, obj, "scaleFactor");
    if (value != 0) intern->options.scale_factor = value;
    RETURN_OBJ_COPY(obj);
}
