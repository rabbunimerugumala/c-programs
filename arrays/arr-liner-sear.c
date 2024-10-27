#include <stdio.h>
void main()
{
    int size, i, searchkey, flag = 0;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size];
    printf("ENTER THE ARRAY VALUES: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf(" ENTER THE SEARCH KEY: ");
    scanf("%d", &searchkey);
    for (i = 0; i < size; i++)
    {
        if (searchkey == arr[i])
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("%d IS FOUND AT INDEX %d", searchkey, i);
    }
    else
    {
        printf("%d IS NOT FOUND", searchkey);
    }
}