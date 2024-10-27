#include <stdio.h>
void main()
{
    int i, j, size;
    printf("ENTER THE SIZE: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
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