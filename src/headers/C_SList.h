#ifndef C_SLIST_H
#define C_SLIST_H


#include "common.h"

typedef struct  
{
    size_t size;
    S_Node *head;
    S_Node *tail;
}C_SList;


C_SList         *C_SList_create();
enum C_COMMON   C_SList_free(C_SList *list);


enum C_COMMON   C_SList_add_First(C_SList *list,void *data);
enum C_COMMON   C_SList_add_at(C_SList *list, void *data, size_t index);
enum C_COMMON   C_SList_add_all(C_SList *list1, C_SList *list2);
enum C_COMMON   C_SList_add_all_at(C_SList *list1, C_SList *list2, size_t index);
enum C_COMMON   C_SList_add_Last(C_SList *list,void *data);






#endif // !C_SLIST_H