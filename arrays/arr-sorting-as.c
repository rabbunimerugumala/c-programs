#include <stdio.h>
void main()
{
    int size, i, j, temp;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER THE ARRAY VALUES: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("THE SORTED ARRAY IS\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}