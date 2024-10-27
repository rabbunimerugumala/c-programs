#include <stdio.h>
void main()
{
    int size, i, j;
    printf("ENTER A NUMBER: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}