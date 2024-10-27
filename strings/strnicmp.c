// strnicmp()
// Syntax
// strnicmp(str1, str2, n);

// The strnicmp() function compares, at most, the first n characters
//  of string1 and string2 without sensitivity to case. The function
//  operates on null terminated strings.

//  Purpose of strnicmp()
// strnicmp() is one of the inbuilt string function in c programming
//  which is used to compare the first n numbers of characters in a
//  string str1 and str2.

#include <stdio.h>
#include <string.h>
void main()
{
    char upr[100], lwr[100];
    printf("enter string in uprcase: ");
    gets(upr);
    printf("enter string in lwrcase: ");
    gets(lwr);
    printf("%d", strnicmp(upr, lwr, 4));
}