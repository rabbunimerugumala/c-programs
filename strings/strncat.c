// strncat() — Concatenate Strings.

// Syntax:-
// strncat(str1, str2, n);

// The strncat() function appends the first count characters of string2
// to string1 and ends the resulting string with a null character (\0).
// If count is greater than the length of string2, the length of string2
// is used in place of count.

// Purpose of strncat():-
// strncat() is one of the inbuilt string function in c programming which is used to
//  combine two strings to form a single one up to a specified length n.

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];
    printf("ENTER THE 1 STRING: ");
    scanf("%s", str1);
    printf("ENTER THE 2  STRING: ");
    scanf("%s", str2);
    strncat(str1, str2, 4);
    printf("THE strncat STRING IS:%s\n", str1);
}