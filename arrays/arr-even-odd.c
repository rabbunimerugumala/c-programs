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
    for (i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d array element is even number\n", arr[i]);
        }
        else
        {
            printf("%d array element is odd number\n", arr[i]);
        }
    }
}