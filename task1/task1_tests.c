#include "checkit.h"
#include "task1.h"

void test1_str_lower()
{
   char input[] = "Hello THERE";
   char result[15];
   char *expected = "hello there";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test2_str_lower()
{
   char input[] = "";
   char result[15];
   char *expected = "";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test3_str_lower()
{
   char input[] = "HELLO WORLD!";
   char result[15];
   char *expected = "hello world!";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test4_str_lower()
{
   char input[] = "hello world";
   char result[15];
   char *expected = "hello world";

   str_lower(input, result);

   checkit_string(result, expected);
}

void test1_str_lower_mutate()
{
   char input[] = "Hello THERE";
   char *expected = "hello there";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

void test2_str_lower_mutate()
{
   char input[] = "";
   char *expected = "";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

void test3_str_lower_mutate()
{
   char input[] = "HELLO WORLD!";
   char *expected = "hello world!";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

void test4_str_lower_mutate()
{
   char input[] = "hello world";
   char *expected = "hello world";

   str_lower_mutate(input);

   checkit_string(input, expected);
}

int main(void)
{
   test1_str_lower();
   test2_str_lower();
   test3_str_lower();
   test4_str_lower();
   test1_str_lower_mutate();
   test2_str_lower_mutate();
   test3_str_lower_mutate();
   test4_str_lower_mutate();
   return 0;
}
