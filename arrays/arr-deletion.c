#include <stdio.h>
void main()
{
    int size, i, del_index;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER %d ARRAY VALUES: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE INDEX TO BE DELETED: ");
    scanf("%d", &del_index);
    if (del_index >= size)
    {
        printf("DELETION IS NOT POSSIBLE,INDEX IS OUT OF RANGE ");
    }
    else
    {
        for (i = del_index; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        printf("THE RESULT ARRAY IS: ");
        for (i = 0; i < size - 1; i++)
        {
            printf("%d ", arr[i]);
        }
    }
}