// strcmpi()

// Syntax:
// int strcmpi (const char * str1, const char * str2 );

// strcmpi compares string1 and string2 without sensitivity to case.
//  All alphabetic characters in the two arguments string1 and string2
//   are converted to lowercase before the comparison. The function operates
//   on null-ended strings.

#include <stdio.h>
#include <string.h>
void main()
{
    char upr[100], lwr[100];
    printf("enter string in uprcase: ");
    gets(upr);
    printf("enter string in lwrcase: ");
    gets(lwr);
    printf("%d", strcmpi(upr, lwr));
}
