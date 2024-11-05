#include "checkit.h"
#include "array_list.h"

void test1()
{
    char *expected = "Hello";
    array_list list = array_list_new();
    array_list *p = &list;
    array_list_add_to_end(p, "Hello");
    checkit_string(list.ar[0], expected);
}

void test2()
{
    char *expected1 = "Hello";
    char *expected2 = "World!";
    array_list list = array_list_new();
    array_list *p = &list;
    array_list_add_to_end(p, "Hello");
    array_list_add_to_end(p, "World!");
    checkit_string(list.ar[0], expected1);
    checkit_string(list.ar[1], expected2);
}

void test3()
{
    char *expected1 = "old";
    char *expected2 = "old";
    char *expected3 = "old";
    char *expected4 = "resized";
    array_list list = array_list_new();
    array_list *p = &list;
    array_list_add_to_end(p, "old");
    array_list_add_to_end(p, "old");
    array_list_add_to_end(p, "old");
    array_list_add_to_end(p, "resized");
    checkit_string(list.ar[0], expected1);
    checkit_string(list.ar[1], expected2);
    checkit_string(list.ar[2], expected3);
    checkit_string(list.ar[3], expected4);
}

void test4()
{
    char *expected1 = "old";
    char *expected2 = "old";
    char *expected3 = "old";
    char *expected4 = "resized";
    char *expected5 = "old";
    char *expected6 = "old";
    char *expected7 = "resized";
    array_list list = array_list_new();
    array_list *p = &list;
    array_list_add_to_end(p, "old");
    array_list_add_to_end(p, "old");
    array_list_add_to_end(p, "old");
    array_list_add_to_end(p, "resized");
    array_list_add_to_end(p, "old");
    array_list_add_to_end(p, "old");
    array_list_add_to_end(p, "resized");
    checkit_string(list.ar[0], expected1);
    checkit_string(list.ar[1], expected2);
    checkit_string(list.ar[2], expected3);
    checkit_string(list.ar[3], expected4);
    checkit_string(list.ar[4], expected5);
    checkit_string(list.ar[5], expected6);
    checkit_string(list.ar[6], expected7);
}

int main(void)
{
    test1();
    test2();
    test3();
    test4();
    return 0;
}