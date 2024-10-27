// strlwr()

// Syntax:
// char *strlwr(char *str);
// strlwr is used to convert a given string into lowercase.

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter The String: ");
    scanf("%[^\n]s", str);
    int result = strlwr(str);
    printf("THE LOWERCASE STRING IS:%s", result);
}