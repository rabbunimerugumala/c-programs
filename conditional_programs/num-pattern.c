#include <stdio.h>
void main()
{
    int size, i, j, val;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {

        for (j = 0; j < size; j++)
        {

            if (i % 2 == 0)
            {
                val = size * i + j;
                printf("%3d", val);
            }
            else
            {
                val = size * (i + 1) - (j + 1);

                printf("%3d", val);
            }
        }
        printf("\n");
    }
}