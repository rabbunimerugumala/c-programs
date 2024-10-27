// strcpy()

// Syntax
// char *strcpy( char *str1, char *str2)
// It takes two strings as input and overwrites the data of the second string into the first string,
// i.e., it copies the data of the second string to the first string.

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", str2);
    strcpy(str1, str2);
    printf("THE STRING IS: %s\n", str2);
    printf("THE str2 IS COPIED TO str1: %s\n", str1);
}