// strupr()

// Syntax:-
// char *strupr(char *str);
// strlwr is used to convert a given string into uppercase.

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Enter The String: ");
    scanf("%[^\n]s", str);
    int result = strupr(str);
    printf("THE LOWERCASE STRING IS:%s", result);
}