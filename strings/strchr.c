// strchr()

// Syntax
// char *strchr(char *str, int ch)
// It takes a string and a character as input and finds out the first occurrence
//  of the given character in that string. It will return the pointer to the first
//   occurrence of that character;if found otherwise, return Null.

#include <stdio.h>
#include <string.h>
void main()
{

    char str1[100] = "I love to write.";
    char *r = strchr(str1, 'o');
    printf("AFTER THE strchr:%s", r);
}