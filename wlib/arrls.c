#include <stdlib.h>
#include <stdio.h>
#include "arrls.h"
// create macro for casting array data
// create error system in wlib.c

WArrayList wcreate_list(size_t element_size, size_t max_elements) { // pass sizeof(type)
    WArrayList list;
    list.element_c = 0;
    list.element_size = element_size;
    list.max_elements = max_elements;
    list.data = malloc(element_size * max_elements);
    return list;
}

void wdestroy_list(WArrayList* list) {
    if(list != NULL) {
        free(list->data);
        list->data = NULL;
    } else {
        // throw wlib error
    }
}

int wlength(WArrayList* list) { // return elements_c
    if(list != NULL) {
        return (int) list->element_c;
    } else {
        // throw wlib error
    }
}

int wsize(WArrayList* list) { // return max_elements
    if(list != NULL) {
        return (int) list->max_elements;
    } else {
        // throw wlib error
    }
}

void wremove(WArrayList* list, void* element) {
    // set value at element to 0, and somehow based off of the data pointer, fill in the blank space
}


void* wpush(WArrayList* list, void* element) {
    if(list != NULL) {
        list->element_c++;

        if(list->element_c == list->max_elements){
            list->max_elements *= 2;
            list->data = realloc(list->data, list->element_size * list->max_elements);
        }

        //list->data[list->elements_c] = (*element); // switch to memcpy
        return &(list->data[list->element_c]); // in case user wants to save to remove element later

    } else {
        // throw wlib error
    }
}

