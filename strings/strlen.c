// strlen()

// strlen()	It returns the string's length.
// Syntax
// size_t strlen(const char *str)
// size_t represents long unsigned int.
// It takes a string (character array or character pointer) as input and
// writes the length of that string without including the end character '\0'.

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    int len;
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", str);
    len = strlen(str);
    printf("string=%s length=%d\n", str, len);
}
