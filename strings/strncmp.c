// strncmp()
// Syntax
// strncmp(str1, str2, n);

// The strncmp() built-in function compares at most the first count
// characters of the string pointed to by string1 to the string pointed
//  to by string2. The string arguments to the function should contain a
//  NULL character ( \0 ) marking the end of the string.

//  Purpose of strncmp()
// strncmp() is one of the inbuilt string function in c programming which
//  is used to compare two strings up to specified length, if the strings
//  are same up to specified length, it returns 0. Otherwise it returns a nonzero value.

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];

    printf("ENTER THE 1 STRING: ");
    scanf("%s", str1);
    printf("ENTER THE 2 STRING: ");
    scanf("%s", str2);
    int result = strncmp(str1, str2, 4);
    printf("strncmp(str1,str2) =%d\n", result);
}