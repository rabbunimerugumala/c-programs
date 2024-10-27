#include <stdio.h>
void main()
{
    char name[100], i, len = 0;
    printf("typ....NAME:- ");
    scanf("%s", &name);
    for (i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    printf("LENGTH OF %s IS %d \n", name, len);
}