#ifndef CLASS_H
#define CLASS_H

#include <ansilove.h>

typedef struct _ansilove_object
{
    struct ansilove_ctx ctx;
    struct ansilove_options options;
    zend_object std;
} ansilove_object;

zend_object *ansilove_create_object(zend_class_entry *class_type);
void ansilove_free_object(zend_object *object);

#endif //CLASS_H
