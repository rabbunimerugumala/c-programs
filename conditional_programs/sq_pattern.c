#include <stdio.h>
void main()
{
    int size, i, j;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
