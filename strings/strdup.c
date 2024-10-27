// strdup()
// strdup() is one of the inbuilt string function in c programming
//  which is used to duplicate a given string.

// Syntax:-
// strdup(str);
#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100];
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", str1);
    char *str2 = strdup(str1);
    printf("The Original string is : %s ", str1);
    printf("\nThe duplicated string is : %s ", str2);
}