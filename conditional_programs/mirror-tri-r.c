#include <stdio.h>
void main()
{
    int size, i, j;
    printf("ENTER THE SIZE: ");
    scanf("%d", &size);
    for (i = -size; i <= size; i++)
    {
        for (j = size; j >= 0; j--)
        {
            if (-i <= j && i <= j)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}
