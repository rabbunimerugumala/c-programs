// strset()

// strset( ) function sets all the characters in a string to given character.

// Syntax:-
// strset(str, chr);

//  Here str is a string whereas chr is a character.
//   strset() will replace every characters in a string with some user metioned character in chr.

// Purpose Of strset():-
// strset() is one of the inbuilt string function in c programming
// which is used to set a particular character to the string.
//  strset() is most widely used to hide the set of characters while user entering a password.

#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    char chr = '#';
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", str);
    int result = strset(str, chr);
    printf("The String Is: %s ", result);
}