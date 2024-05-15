#ifndef COMMON_H
#define COMMON_H

#include <stdlib.h>

enum C_COMMON
{
    C_OK                = 0,
    C_ERR_ALLOC         = 1,
    C_ERR_OUT_OF_RANGE  = 2,
    C_ERR_NOT_FOUND     = 3,

};


typedef struct snode
{
    void            *data;
    struct snode    *next;
} C_S_Node;


#endif // !COMMON_H