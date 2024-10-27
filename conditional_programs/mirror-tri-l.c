#include <stdio.h>
void main()
{
    int i, j, size;
    printf("ENTER THE SIZE: ");
    scanf("%d", &size);

    for (i = -size; i <= size; i++)

    {
        for (j = 0; j <= size; j++)
        {
            if (-i <= j && i <= j)
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
