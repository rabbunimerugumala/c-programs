#include <stdio.h>
void main()
{
    int size, i, j;
    printf("ENTER A NUMBERB: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            if (i % 2 == 0)
                printf("0");
            else
                printf("1");
        }
        printf("\n");
    }
}