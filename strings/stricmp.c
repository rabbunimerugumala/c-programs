// stricmp()
// Syntax
// stricmp(str1, str2);

// The stricmp() function compares string1 and string2 without
// sensitivity to case. All alphabetic characters in the two arguments
//  string1 and string2 are converted to lowercase before the comparison.
//  The function operates on null-ended strings.

//  Purpose of stricmp()
// stricmp() is one of the inbuilt string function in c programming
//  which is used to compare two strings without any discrimination
//  between uppercase and lowercase letters, if the strings are same,
//  it returns 0. Otherwise it returns a nonzero value.

#include <stdio.h>
#include <string.h>
void main()
{
    char upr[100], lwr[100];
    printf("enter string in uprcase: ");
    gets(upr);
    printf("enter string in lwrcase: ");
    gets(lwr);
    printf("%d", stricmp(upr, lwr));
}
