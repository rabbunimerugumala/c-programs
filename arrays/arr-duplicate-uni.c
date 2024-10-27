#include <stdio.h>
void main()
{
    int size, i, j, count;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size], visited[size];
    printf("ENTER THE %d ARRAY ELEMENTS: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }
    for (i = 0; i < size; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = 1;
            }
        }
        if (count > 1)
        {
            printf(" %d  IS DUPLICATE\n", arr[i]);
        }
        else
        {
            printf("%d IS UNIQUE\n", arr[i]);
        }
    }
}
