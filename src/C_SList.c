#include "headers/C_SList.h"

#include <stdio.h>





C_SList *C_SList_create(){
    C_SList *list = (C_SList *)malloc(sizeof(C_SList));
    if(list == NULL){
        printf("Error creating the LinkedList !");
        return NULL;
    }

    list->size = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;
}

enum C_COMMON C_SList_free(C_SList *list){
    if(list == NULL) return C_OK;

    C_S_Node *node = list->head;
    while (node != NULL)
    {
        C_S_Node *next = node->next;
        free(node);
        node = next;
    }
    free(list);
    return C_OK;
}


enum C_COMMON C_SList_add_First(C_SList *list,void *data){
    C_S_Node *head = (C_S_Node *)malloc(sizeof(C_S_Node));
    if(head == NULL){
        printf("Error adding node to the linkedlist !");
        return C_ERR_ALLOC;
    }
    head->data = data;
    head->next = list->head;
    list->head = head;
    if(list->tail == NULL) list->tail = head;
    list->size+=1;
    return C_OK;
}

enum C_COMMON C_SList_add_at(C_SList *list, void *data, size_t index){
    if(index > list->size) return C_ERR_OUT_OF_RANGE;
    C_S_Node *node = (C_S_Node *)malloc(sizeof(C_S_Node));
    if(node == NULL){
        printf("Error adding node to the linkedlist !");
        return C_ERR_ALLOC;
    }
    node->data = data;
    C_S_Node *curr = list->head;
    for(int i = 0; i < index; i++){
        curr = curr->next;
    }
    node->next = curr->next;
    curr->next = node;
    return C_OK;
}

enum C_COMMON   C_SList_add_all(C_SList *list1, C_SList *list2){
    if(list2 == NULL) return C_OK;
}

enum C_COMMON C_SList_add_Last(C_SList *list,void *data){
    C_S_Node *tail = (C_S_Node *)malloc(sizeof(C_S_Node));
    if(tail == NULL){
        printf("Error adding node to the linkedlist !");
        return C_ERR_ALLOC;
    }
    
    tail->data = data;
    tail->next = NULL;
    if(list != NULL){
        list->tail->next = tail;
    }
    list->tail = tail;
    if(list->head == NULL){
        list->head = tail;
    }
    list->size+=1;
    return C_OK;
}

enum C_COMMON   C_SList_remove_First    (C_SList *list){
    if(list->head == NULL) return C_ERR_OUT_OF_RANGE;
    C_S_Node *head = list->head;
    list->head = list->head->next;
    free(head);
    return C_OK;
}

enum C_COMMON   C_SList_remove_Last     (C_SList *list){
    if(list == NULL) return C_ERR_OUT_OF_RANGE;
    C_S_Node *curr = list->head;
    while (curr->next->next != NULL) curr = curr->next;
    free(curr->next);
    curr->next = NULL;
    return C_OK;
}

enum C_COMMON   C_SList_remove_at       (C_SList *list, int index){
    if(index > list->size) return C_ERR_OUT_OF_RANGE;
    if(index == 0) C_SList_remove_First(list);
    int i = 0;
    C_S_Node *curr = list->head;
    while (i < index){
        curr = curr->next;
    }
    
}









enum C_COMMON   C_SList_print           (C_SList *list){
    if(list == NULL){
        printf("\n");
        return C_OK;
    }
    
    while (true)
    {
        
    }
    

}


