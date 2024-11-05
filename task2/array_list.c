#include "array_list.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// returns a new array_list
array_list array_list_new()
{
    array_list list;
    list.capacity = 3;
    list.length = 0;
    list.ar = (char **)malloc(list.capacity * sizeof(char *));
    if (list.ar == NULL)
    {
        perror("Error with allocating memory");
        exit(1);
    }
    return list;
}

// given an array_list pointer and a string, appends the string to the ar list
void array_list_add_to_end(array_list *list, char *str)
{
    // if ar list is out of space, realloc more memory
    if (list->length >= list->capacity)
    {
        // increase capacity by 2x
        list->capacity *= 2;
        list->ar = (char **)realloc(list->ar, list->capacity * sizeof(char *));
        if (list->ar == NULL)
        {
            perror("Error with reallocating memory");
            exit(1);
        }
    }

    // append the string, increase length by 1
    list->ar[list->length] = str;
    list->length++;
}
