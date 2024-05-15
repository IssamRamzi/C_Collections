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

void C_SList_free(C_SList *list){
    if(list == NULL) return;

    S_Node *node = list->head;
    while (node != NULL)
    {
        S_Node *next = node->next;
        free(node);
        node = next;
    }
    free(list);
}


enum C_COMMON C_SList_add_First(C_SList *list,void *data){
    S_Node *head = (S_Node *)malloc(sizeof(S_Node));
    if(head == NULL){
        printf("Error adding node to the linkedlist !");
        return C_ERROR;
    }
    head->data = data;
    head->next = list->head;
    list->head = head;
    if(list->tail == NULL) list->tail = head;
    list->size+=1;
}



void C_SList_add_Last(C_SList *list,void *data){
    S_Node *tail = (S_Node *)malloc(sizeof(S_Node));
    if(tail == NULL){
        printf("Error adding node to the linkedlist !");
        return NULL;
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

}

