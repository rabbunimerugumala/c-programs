#include <stdio.h>
void main()
{
    int size, i, j, num = 0;

    printf("Enter the size: ");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        for (j = -size; j <= size; j++)
        {
            if (-j % 2 != 0 && j % 2 != 0)
            {
                printf("%d", num);
                num += 1;
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}