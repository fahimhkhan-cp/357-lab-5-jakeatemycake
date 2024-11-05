#include "task1.h"
#include "ctype.h"
#include <stdio.h>
void str_lower(char *orig, char *copy)
{
    // make pointers to access chars of orig and copy
    char *p1 = orig;
    char *p2 = copy;
    // traverse through orig to copy chars
    while (*p1 != '\0')
    {
        // copy lowercase char to copy
        *p2 = tolower(*p1);
        // increment pointers
        p1++;
        p2++;
    }
    // end copy with str terminator
    *p2 = '\0';
}

void str_lower_mutate(char *orig)
{
    char *p1 = orig;
    while (*p1 != '\0')
    {
        // copy lowercase char to copy
        *p1 = tolower(*p1);
        // increment pointers
        p1++;
    }
}
