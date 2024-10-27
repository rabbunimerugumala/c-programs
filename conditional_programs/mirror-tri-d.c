#include <stdio.h>
void main()
{
    int size, i, j;
    printf("ENTER THE SIZE: ");
    scanf("%d", &size);
    for (i = size; i >= 0; i--)
    {
        for (j = -size; j <= size; j++)
        {
            if (-j <= i && j <= i)
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