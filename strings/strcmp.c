// strcmp()

// Syntax
// int strcmp(const char *str1, const char *str2)
// strcmp() takes two strings as input, then compares them, and
// returns an integer based on the following condition:
// Expression	Returns
// string 1 > string 2	Positive integer
// string 1 < string 2	Negative
// string 1 = string 2	Zero

#include <stdio.h>
#include <string.h>
void main()
{
    char str1[100], str2[100];

    printf("ENTER THE 1 STRING: ");
    scanf("%s", str1);
    printf("ENTER THE 2 STRING: ");
    scanf("%s", str2);
    int result = strcmp(str1, str2);
    printf("strcmp(str1,str2) =%d\n", result);
}
