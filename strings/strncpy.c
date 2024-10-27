// strncpy()
// Syntax
// strncpy(str1, str2, n);

// The strncpy() function copies count characters of string2 to string1 .
//  If count is less than or equal to the length of string2 , a null
//  character (\0) is not appended to the copied string.

//  Puropose Of strncpy()
// strncpy() is one of the inbuilt string function in c programming
// which is used to replace a string with another string of required length.

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];
    printf("ENTER THE STRING: ");
    scanf("%s", str2);
    strncpy(str1, str2, 4);
    printf("THE STRING IS: %s\n", str2);
    printf("THE str2 IS COPIED TO str1:%s", str1);
}