#include <stdio.h>
void main()
{
    int size, i, index, value;
    printf("ENTER THE SIZE OF ARRAY: ");
    scanf("%d", &size);
    int arr[size + 1];
    printf("ENTER %d NUMBER OF ELEMENTS: \n ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("ENTER THE INDEX AT INSERTED: \n");
    scanf("%d", &index);
    printf("ENTER THE VALUE TO BE INSERTED: \n");
    scanf("%d", &value);
    for (i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    printf("THE RESULT ARRAY IS: ");
    for (i = 0; i < size + 1; i++)
    {
        printf("%d ", arr[i]);
    }
}