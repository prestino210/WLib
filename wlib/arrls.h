#ifndef WARRLS_H
#define WARRLS_H
#include <stdlib.h>
#include <stdio.h>
// create macro for casting array data
// create error system in wlib.c

typedef struct {
    void* data;
    size_t element_size;
    size_t element_c;
    size_t max_elements;
} WArrayList;

WArrayList wcreate_list(size_t element_size, size_t max_elements); 

void wdestroy_list(WArrayList* list);

int wlength(WArrayList* list); 

int wsize(WArrayList* list); 

void wremove(WArrayList* list, void* element);

void* wpush(WArrayList* list, void* element);

#endif