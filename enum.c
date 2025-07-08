#ifdef HAVE_CONFIG_H
# include <config.h>
#endif

#include "Zend/zend_API.h"
#include "Zend/zend_enum.h"

#include "enum.h"

#include <ansilove.h>

static void enum_add_long_case(zend_class_entry *class_entry, const char *name, const int value)
{
    zval enum_case_value;
    ZVAL_LONG(&enum_case_value, value);
    zend_enum_add_case_cstr(class_entry, name, &enum_case_value);
}

zend_class_entry *register_enum_font(void)
{
    zend_class_entry *class_entry = zend_register_internal_enum("AnsiLoveFont", IS_LONG, NULL);

    enum_add_long_case(class_entry, "CP437", ANSILOVE_FONT_CP437);
    enum_add_long_case(class_entry, "CP437_80x50", ANSILOVE_FONT_CP437_80x50);
    enum_add_long_case(class_entry, "CP737", ANSILOVE_FONT_CP737);
    enum_add_long_case(class_entry, "CP775", ANSILOVE_FONT_CP775);
    enum_add_long_case(class_entry, "CP850", ANSILOVE_FONT_CP850);
    enum_add_long_case(class_entry, "CP852", ANSILOVE_FONT_CP852);
    enum_add_long_case(class_entry, "CP855", ANSILOVE_FONT_CP855);
    enum_add_long_case(class_entry, "CP857", ANSILOVE_FONT_CP857);
    enum_add_long_case(class_entry, "CP860", ANSILOVE_FONT_CP860);
    enum_add_long_case(class_entry, "CP861", ANSILOVE_FONT_CP861);
    enum_add_long_case(class_entry, "CP862", ANSILOVE_FONT_CP862);
    enum_add_long_case(class_entry, "CP863", ANSILOVE_FONT_CP863);
    enum_add_long_case(class_entry, "CP865", ANSILOVE_FONT_CP865);
    enum_add_long_case(class_entry, "CP866", ANSILOVE_FONT_CP866);
    enum_add_long_case(class_entry, "CP869", ANSILOVE_FONT_CP869);
    enum_add_long_case(class_entry, "Terminus", ANSILOVE_FONT_TERMINUS);
    enum_add_long_case(class_entry, "Spleen", ANSILOVE_FONT_SPLEEN);
    enum_add_long_case(class_entry, "Microknight", ANSILOVE_FONT_MICROKNIGHT);
    enum_add_long_case(class_entry, "MicroknightPlus", ANSILOVE_FONT_MICROKNIGHT_PLUS);
    enum_add_long_case(class_entry, "Mosoul", ANSILOVE_FONT_MOSOUL);
    enum_add_long_case(class_entry, "PotNoodle", ANSILOVE_FONT_POT_NOODLE);
    enum_add_long_case(class_entry, "Topaz", ANSILOVE_FONT_TOPAZ);
    enum_add_long_case(class_entry, "TopazPlus", ANSILOVE_FONT_TOPAZ_PLUS);
    enum_add_long_case(class_entry, "Topaz500", ANSILOVE_FONT_TOPAZ500);
    enum_add_long_case(class_entry, "Topaz500Plus", ANSILOVE_FONT_TOPAZ500_PLUS);

    return class_entry;
}

zend_class_entry *register_enum_mode(void)
{
    zend_class_entry *class_entry = zend_register_internal_enum("AnsiLoveMode", IS_LONG, NULL);

    enum_add_long_case(class_entry, "Ced", ANSILOVE_MODE_CED);
    enum_add_long_case(class_entry, "Transparent", ANSILOVE_MODE_TRANSPARENT);
    enum_add_long_case(class_entry, "Workbench", ANSILOVE_MODE_WORKBENCH);

    return class_entry;
}
