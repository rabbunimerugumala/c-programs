#include <stdio.h>
void main()
{
    int size, i, j;
    printf("ENTER A NUMBER: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        for (j = size - 1; j >= 0; j--)
        {
            if (j <= i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}