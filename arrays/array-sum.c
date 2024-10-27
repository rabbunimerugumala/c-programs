#include <stdio.h>
void main()
{
    int arr[5], i, sum = 0;
    printf("enter the 5 array values: ");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 5; i++)
    {
        sum = sum + arr[i];
    }
    printf("The sum of array elements is %d", sum);
}