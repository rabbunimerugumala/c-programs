// strcat()

// Syntax

// char *strcat(char *str1, char *str2)

// It takes two strings as input and concatenates the second string to the first string,
//  which means it will attach the second string to the end of the first string and
//  save the concatenated string to the first string. The size of the first string
//  should be large enough to save the result.

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];
    printf("ENTER THE 1 STRING: ");
    scanf("%s", str1);
    printf("ENTER THE 2  STRING: ");
    scanf("%s", str2);
    strcat(str1, str2);
    printf("THE strcat STRING IS:%s\n", str1);
}
