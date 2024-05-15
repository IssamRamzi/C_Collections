#ifndef C_SLIST_H
#define C_SLIST_H


#include "common.h"

typedef struct  
{
    size_t size;
    C_S_Node *head;
    C_S_Node *tail;
}C_SList;


C_SList         *C_SList_create         ();
enum C_COMMON   C_SList_free            (C_SList *list);


enum C_COMMON   C_SList_add_First       (C_SList *list,void *data);
enum C_COMMON   C_SList_add_at          (C_SList *list, void *data, size_t index);
enum C_COMMON   C_SList_add_all         (C_SList *list1, C_SList *list2);
enum C_COMMON   C_SList_add_all_at      (C_SList *list1, C_SList *list2, size_t index);
enum C_COMMON   C_SList_add_Last        (C_SList *list,void *data);


enum C_COMMON   C_SList_remove_First    (C_SList *list);
enum C_COMMON   C_SList_remove_Last     (C_SList *list);
enum C_COMMON   C_SList_remove_at       (C_SList *list);
enum C_COMMON   C_SList_remove_value    (C_SList *list, void *data);
enum C_COMMON   C_SList_remove_all      (C_SList *list, C_SList *list2);
enum C_COMMON   C_SList_remove_all_at   (C_SList *list, C_SList *list2, size_t index);


void *          C_SList_get_at          (C_SList *list, size_t index);


size_t          C_SList_contains        (C_SList *list, void *data);
size_t          C_SList_contains_all    (C_SList *list,C_SList *list2);


void            C_SList_reverse         (C_SList *list);
// void            C_SList_sort(C_SList *list);






#endif // !C_SLIST_H