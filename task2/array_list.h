#ifndef ARRAY_LIST_H
#define ARRAY_LIST_H

typedef struct
{
    char **ar;    // array list of strings
    int capacity; // max capacity
    int length;   // number of strings in the list
} array_list;

array_list array_list_new();
void array_list_add_to_end(array_list *list, char *str);

#endif