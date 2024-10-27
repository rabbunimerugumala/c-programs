#include <stdio.h>
void main()
{
    int size;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size], i, f, j;
    printf("ENTER %d FACTORIAL NUMBERS: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        f = 1;
        for (j = arr[i]; j >= 1; j--)
        {

            f = f * j;
        }
        printf("%d factorial is %d\n", arr[i], f);
    }
}
