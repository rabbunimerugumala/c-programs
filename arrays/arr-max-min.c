#include <stdio.h>
void main()
{
    int size, i, j;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER THE ARRAY ELEMENTS: ");
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
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] - arr[j];
                arr[i] = arr[i] - arr[j];
            }
        }
    }
    printf("%d is minimum element\n %d is maximum element ", arr[0], arr[size - 1]);
}
