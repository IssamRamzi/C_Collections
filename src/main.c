#include <stdio.h>
#include "headers/C_SList.h"

int main(void)
{
    C_SList *list = C_SList_create();
    C_SList_add_First(list,"Hello World");
    C_SList_add_Last(list,"Salem");
    C_SList_add_Last(list,"Bonjour");
    C_SList_add_Last(list,"Hola");
    C_SList_add_Last(list,"Shanghai");
    C_SList_add_Last(list,"JAI DES PULSIONS BIZARRES C UN MYSTERE");
    C_SList_add_Last(list,5);
    printf("%s\n",list->head->data);
    printf("%d",list->tail->data);


    
    
    

    printf("\n");
    return 0;
}
