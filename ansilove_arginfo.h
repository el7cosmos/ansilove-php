/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: 0e28ee80fa58ef9d4cd1a4b8231f6c22d3138a05 */

ZEND_BEGIN_ARG_INFO_EX(arginfo_class_AnsiLove___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, input, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AnsiLove_isDiz, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setDiz, 0, 0, AnsiLove, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, diz, _IS_BOOL, 0, "TRUE")
ZEND_END_ARG_INFO()

#define arginfo_class_AnsiLove_isDos arginfo_class_AnsiLove_isDiz

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setDos, 0, 0, AnsiLove, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, dos, _IS_BOOL, 0, "TRUE")
ZEND_END_ARG_INFO()

#define arginfo_class_AnsiLove_isIceColors arginfo_class_AnsiLove_isDiz

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setIceColors, 0, 0, AnsiLove, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, iceColors, _IS_BOOL, 0, "TRUE")
ZEND_END_ARG_INFO()

#define arginfo_class_AnsiLove_isTrueColor arginfo_class_AnsiLove_isDiz

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setTrueColor, 0, 0, AnsiLove, 0)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, trueColor, _IS_BOOL, 0, "TRUE")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_AnsiLove_getColumns, 0, 0, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setColumns, 0, 1, AnsiLove, 0)
	ZEND_ARG_TYPE_INFO(0, columns, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_getFont, 0, 0, AnsiLoveFont, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setFont, 0, 1, AnsiLove, 0)
	ZEND_ARG_OBJ_INFO(0, font, AnsiLoveFont, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AnsiLove_getBits arginfo_class_AnsiLove_getColumns

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setBits, 0, 1, AnsiLove, 0)
	ZEND_ARG_TYPE_INFO(0, bit, IS_LONG, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_getMode, 0, 0, AnsiLoveMode, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setMode, 0, 1, AnsiLove, 0)
	ZEND_ARG_OBJ_INFO(0, mode, AnsiLoveMode, 0)
ZEND_END_ARG_INFO()

#define arginfo_class_AnsiLove_getScaleFactor arginfo_class_AnsiLove_getColumns

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_AnsiLove_setScaleFactor, 0, 1, AnsiLove, 0)
	ZEND_ARG_TYPE_INFO(0, scaleFactor, IS_LONG, 0)
ZEND_END_ARG_INFO()


ZEND_METHOD(AnsiLove, __construct);
ZEND_METHOD(AnsiLove, isDiz);
ZEND_METHOD(AnsiLove, setDiz);
ZEND_METHOD(AnsiLove, isDos);
ZEND_METHOD(AnsiLove, setDos);
ZEND_METHOD(AnsiLove, isIceColors);
ZEND_METHOD(AnsiLove, setIceColors);
ZEND_METHOD(AnsiLove, isTrueColor);
ZEND_METHOD(AnsiLove, setTrueColor);
ZEND_METHOD(AnsiLove, getColumns);
ZEND_METHOD(AnsiLove, setColumns);
ZEND_METHOD(AnsiLove, getFont);
ZEND_METHOD(AnsiLove, setFont);
ZEND_METHOD(AnsiLove, getBits);
ZEND_METHOD(AnsiLove, setBits);
ZEND_METHOD(AnsiLove, getMode);
ZEND_METHOD(AnsiLove, setMode);
ZEND_METHOD(AnsiLove, getScaleFactor);
ZEND_METHOD(AnsiLove, setScaleFactor);


static const zend_function_entry class_AnsiLoveFont_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_AnsiLoveMode_methods[] = {
	ZEND_FE_END
};


static const zend_function_entry class_AnsiLove_methods[] = {
	ZEND_ME(AnsiLove, __construct, arginfo_class_AnsiLove___construct, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, isDiz, arginfo_class_AnsiLove_isDiz, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setDiz, arginfo_class_AnsiLove_setDiz, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, isDos, arginfo_class_AnsiLove_isDos, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setDos, arginfo_class_AnsiLove_setDos, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, isIceColors, arginfo_class_AnsiLove_isIceColors, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setIceColors, arginfo_class_AnsiLove_setIceColors, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, isTrueColor, arginfo_class_AnsiLove_isTrueColor, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setTrueColor, arginfo_class_AnsiLove_setTrueColor, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, getColumns, arginfo_class_AnsiLove_getColumns, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setColumns, arginfo_class_AnsiLove_setColumns, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, getFont, arginfo_class_AnsiLove_getFont, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setFont, arginfo_class_AnsiLove_setFont, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, getBits, arginfo_class_AnsiLove_getBits, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setBits, arginfo_class_AnsiLove_setBits, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, getMode, arginfo_class_AnsiLove_getMode, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setMode, arginfo_class_AnsiLove_setMode, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, getScaleFactor, arginfo_class_AnsiLove_getScaleFactor, ZEND_ACC_PUBLIC)
	ZEND_ME(AnsiLove, setScaleFactor, arginfo_class_AnsiLove_setScaleFactor, ZEND_ACC_PUBLIC)
	ZEND_FE_END
};


static const zend_function_entry class_AnsiLoveException_methods[] = {
	ZEND_FE_END
};

static zend_class_entry *register_class_AnsiLoveFont(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AnsiLoveFont", IS_LONG, class_AnsiLoveFont_methods);

	zval enum_case_CP437_value;
	ZVAL_LONG(&enum_case_CP437_value, 1);
	zend_enum_add_case_cstr(class_entry, "CP437", &enum_case_CP437_value);

	zval enum_case_CP437_80x50_value;
	ZVAL_LONG(&enum_case_CP437_80x50_value, 2);
	zend_enum_add_case_cstr(class_entry, "CP437_80x50", &enum_case_CP437_80x50_value);

	zval enum_case_CP737_value;
	ZVAL_LONG(&enum_case_CP737_value, 3);
	zend_enum_add_case_cstr(class_entry, "CP737", &enum_case_CP737_value);

	zval enum_case_CP775_value;
	ZVAL_LONG(&enum_case_CP775_value, 4);
	zend_enum_add_case_cstr(class_entry, "CP775", &enum_case_CP775_value);

	zval enum_case_CP850_value;
	ZVAL_LONG(&enum_case_CP850_value, 5);
	zend_enum_add_case_cstr(class_entry, "CP850", &enum_case_CP850_value);

	zval enum_case_CP852_value;
	ZVAL_LONG(&enum_case_CP852_value, 6);
	zend_enum_add_case_cstr(class_entry, "CP852", &enum_case_CP852_value);

	zval enum_case_CP855_value;
	ZVAL_LONG(&enum_case_CP855_value, 7);
	zend_enum_add_case_cstr(class_entry, "CP855", &enum_case_CP855_value);

	zval enum_case_CP857_value;
	ZVAL_LONG(&enum_case_CP857_value, 8);
	zend_enum_add_case_cstr(class_entry, "CP857", &enum_case_CP857_value);

	zval enum_case_CP860_value;
	ZVAL_LONG(&enum_case_CP860_value, 9);
	zend_enum_add_case_cstr(class_entry, "CP860", &enum_case_CP860_value);

	zval enum_case_CP861_value;
	ZVAL_LONG(&enum_case_CP861_value, 10);
	zend_enum_add_case_cstr(class_entry, "CP861", &enum_case_CP861_value);

	zval enum_case_CP862_value;
	ZVAL_LONG(&enum_case_CP862_value, 11);
	zend_enum_add_case_cstr(class_entry, "CP862", &enum_case_CP862_value);

	zval enum_case_CP863_value;
	ZVAL_LONG(&enum_case_CP863_value, 12);
	zend_enum_add_case_cstr(class_entry, "CP863", &enum_case_CP863_value);

	zval enum_case_CP865_value;
	ZVAL_LONG(&enum_case_CP865_value, 13);
	zend_enum_add_case_cstr(class_entry, "CP865", &enum_case_CP865_value);

	zval enum_case_CP866_value;
	ZVAL_LONG(&enum_case_CP866_value, 14);
	zend_enum_add_case_cstr(class_entry, "CP866", &enum_case_CP866_value);

	zval enum_case_CP869_value;
	ZVAL_LONG(&enum_case_CP869_value, 15);
	zend_enum_add_case_cstr(class_entry, "CP869", &enum_case_CP869_value);

	zval enum_case_Terminus_value;
	ZVAL_LONG(&enum_case_Terminus_value, 20);
	zend_enum_add_case_cstr(class_entry, "Terminus", &enum_case_Terminus_value);

	zval enum_case_Spleen_value;
	ZVAL_LONG(&enum_case_Spleen_value, 21);
	zend_enum_add_case_cstr(class_entry, "Spleen", &enum_case_Spleen_value);

	zval enum_case_Microknight_value;
	ZVAL_LONG(&enum_case_Microknight_value, 30);
	zend_enum_add_case_cstr(class_entry, "Microknight", &enum_case_Microknight_value);

	zval enum_case_MicroknightPlus_value;
	ZVAL_LONG(&enum_case_MicroknightPlus_value, 31);
	zend_enum_add_case_cstr(class_entry, "MicroknightPlus", &enum_case_MicroknightPlus_value);

	zval enum_case_Mosoul_value;
	ZVAL_LONG(&enum_case_Mosoul_value, 32);
	zend_enum_add_case_cstr(class_entry, "Mosoul", &enum_case_Mosoul_value);

	zval enum_case_PotNoodle_value;
	ZVAL_LONG(&enum_case_PotNoodle_value, 33);
	zend_enum_add_case_cstr(class_entry, "PotNoodle", &enum_case_PotNoodle_value);

	zval enum_case_Topaz_value;
	ZVAL_LONG(&enum_case_Topaz_value, 34);
	zend_enum_add_case_cstr(class_entry, "Topaz", &enum_case_Topaz_value);

	zval enum_case_TopazPlus_value;
	ZVAL_LONG(&enum_case_TopazPlus_value, 35);
	zend_enum_add_case_cstr(class_entry, "TopazPlus", &enum_case_TopazPlus_value);

	zval enum_case_Topaz500_value;
	ZVAL_LONG(&enum_case_Topaz500_value, 36);
	zend_enum_add_case_cstr(class_entry, "Topaz500", &enum_case_Topaz500_value);

	zval enum_case_Topaz500Plus_value;
	ZVAL_LONG(&enum_case_Topaz500Plus_value, 37);
	zend_enum_add_case_cstr(class_entry, "Topaz500Plus", &enum_case_Topaz500Plus_value);

	return class_entry;
}

static zend_class_entry *register_class_AnsiLoveMode(void)
{
	zend_class_entry *class_entry = zend_register_internal_enum("AnsiLoveMode", IS_LONG, class_AnsiLoveMode_methods);

	zval enum_case_Ced_value;
	ZVAL_LONG(&enum_case_Ced_value, 1);
	zend_enum_add_case_cstr(class_entry, "Ced", &enum_case_Ced_value);

	zval enum_case_Transparent_value;
	ZVAL_LONG(&enum_case_Transparent_value, 2);
	zend_enum_add_case_cstr(class_entry, "Transparent", &enum_case_Transparent_value);

	zval enum_case_Workbench_value;
	ZVAL_LONG(&enum_case_Workbench_value, 3);
	zend_enum_add_case_cstr(class_entry, "Workbench", &enum_case_Workbench_value);

	return class_entry;
}

static zend_class_entry *register_class_AnsiLove(void)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "AnsiLove", class_AnsiLove_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_NO_DYNAMIC_PROPERTIES;

	zval property_input_default_value;
	ZVAL_UNDEF(&property_input_default_value);
	zend_string *property_input_name = zend_string_init("input", sizeof("input") - 1, 1);
	zend_declare_typed_property(class_entry, property_input_name, &property_input_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_STRING));
	zend_string_release(property_input_name);

	zval property_diz_default_value;
	ZVAL_UNDEF(&property_diz_default_value);
	zend_string *property_diz_name = zend_string_init("diz", sizeof("diz") - 1, 1);
	zend_declare_typed_property(class_entry, property_diz_name, &property_diz_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_diz_name);

	zval property_dos_default_value;
	ZVAL_UNDEF(&property_dos_default_value);
	zend_string *property_dos_name = zend_string_init("dos", sizeof("dos") - 1, 1);
	zend_declare_typed_property(class_entry, property_dos_name, &property_dos_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_dos_name);

	zval property_iceColors_default_value;
	ZVAL_UNDEF(&property_iceColors_default_value);
	zend_string *property_iceColors_name = zend_string_init("iceColors", sizeof("iceColors") - 1, 1);
	zend_declare_typed_property(class_entry, property_iceColors_name, &property_iceColors_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_iceColors_name);

	zval property_trueColor_default_value;
	ZVAL_UNDEF(&property_trueColor_default_value);
	zend_string *property_trueColor_name = zend_string_init("trueColor", sizeof("trueColor") - 1, 1);
	zend_declare_typed_property(class_entry, property_trueColor_name, &property_trueColor_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_BOOL));
	zend_string_release(property_trueColor_name);

	zval property_columns_default_value;
	ZVAL_UNDEF(&property_columns_default_value);
	zend_string *property_columns_name = zend_string_init("columns", sizeof("columns") - 1, 1);
	zend_declare_typed_property(class_entry, property_columns_name, &property_columns_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_columns_name);

	zend_string *property_font_class_AnsiLoveFont = zend_string_init("AnsiLoveFont", sizeof("AnsiLoveFont")-1, 1);
	zval property_font_default_value;
	ZVAL_UNDEF(&property_font_default_value);
	zend_string *property_font_name = zend_string_init("font", sizeof("font") - 1, 1);
	zend_declare_typed_property(class_entry, property_font_name, &property_font_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_font_class_AnsiLoveFont, 0, 0));
	zend_string_release(property_font_name);

	zval property_bits_default_value;
	ZVAL_UNDEF(&property_bits_default_value);
	zend_string *property_bits_name = zend_string_init("bits", sizeof("bits") - 1, 1);
	zend_declare_typed_property(class_entry, property_bits_name, &property_bits_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_bits_name);

	zend_string *property_mode_class_AnsiLoveMode = zend_string_init("AnsiLoveMode", sizeof("AnsiLoveMode")-1, 1);
	zval property_mode_default_value;
	ZVAL_UNDEF(&property_mode_default_value);
	zend_string *property_mode_name = zend_string_init("mode", sizeof("mode") - 1, 1);
	zend_declare_typed_property(class_entry, property_mode_name, &property_mode_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_CLASS(property_mode_class_AnsiLoveMode, 0, 0));
	zend_string_release(property_mode_name);

	zval property_scaleFactor_default_value;
	ZVAL_UNDEF(&property_scaleFactor_default_value);
	zend_string *property_scaleFactor_name = zend_string_init("scaleFactor", sizeof("scaleFactor") - 1, 1);
	zend_declare_typed_property(class_entry, property_scaleFactor_name, &property_scaleFactor_default_value, ZEND_ACC_PRIVATE, NULL, (zend_type) ZEND_TYPE_INIT_MASK(MAY_BE_LONG));
	zend_string_release(property_scaleFactor_name);

	return class_entry;
}

static zend_class_entry *register_class_AnsiLoveException(zend_class_entry *class_entry_Exception)
{
	zend_class_entry ce, *class_entry;

	INIT_CLASS_ENTRY(ce, "AnsiLoveException", class_AnsiLoveException_methods);
	class_entry = zend_register_internal_class_ex(&ce, class_entry_Exception);

	return class_entry;
}
