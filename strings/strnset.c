// strnset()

// Syntax:
// char *strnset(const char *str, char ch, int n);

// The strnset() function is a builtin function in C and it sets the
// first n characters of a string to a given character. If n is greater
// than the length of string, the length of string is used in place of n.

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    char chr = '*';
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", str);
    printf("THE STRING IS:%s\n", str);
    int result = strnset(str, chr, 4);
    printf("The String AFTER THE strnset Is: %s ", result);
}