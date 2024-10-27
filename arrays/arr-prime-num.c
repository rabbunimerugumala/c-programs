#include <stdio.h>
void main()
{
    int size;
    printf("enter the size: ");
    scanf("%d", &size);
    int arr[size], i, num, j, flag;
    printf("enter %d arrays values: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        num = arr[i];
        flag = 0;
        for (j = 2; j < num; j++)
        {
            if (num % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            printf("%d is a prime number \n", num);
        else
            printf("%d is not prime number\n", num);
    }
}