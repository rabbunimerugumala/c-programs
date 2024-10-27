#include <stdio.h>
void main()
{
    int size, i;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER THE ARRAY ELEMENTS: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf(" ARRAY ELEMENTS ARE IN REVERSE\n ");
    for (i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}