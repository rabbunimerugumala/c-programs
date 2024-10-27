#include <stdio.h>
void main()
{
    int size, i, j, temp;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER THE ARRAY: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < size; i++)
    {
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] < arr[j])
            {
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    printf("THE SORTED ARRAY I\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}