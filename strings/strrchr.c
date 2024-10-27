// strrchr()

// Syntax:

// char *strrchr(char *str, int ch)

// It takes a string and a character as input and finds out the last occurrence
//  of a given character in that string. It will return the pointer to the last
//  occurrence of that character if found otherwise, return Null.

#include <stdio.h>
#include <string.h>
void main()
{

    char str1[100] = "I love to write.";
    int r = strrchr(str1, 'o');
    printf("AFTER THE strrchr:%s", r);
}