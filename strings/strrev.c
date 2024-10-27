// strrev()

// Syntax:
// char *strrev(char *str);
// The strrev() function is used to reverse the given string.

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100];
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", str1);
    printf("THE STRING IS: %s\n", str1);
    int reverse = strrev(str1);
    printf("THE REVERSE STRING IS: %s\n", reverse);
}