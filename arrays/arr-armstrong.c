#include <stdio.h>
#include <math.h>
void main()
{
    int size;
    printf("ENTER THE ARRAY SIZE: ");
    scanf("%d", &size);
    int arr[size], i, result = 0, num, x, len;
    double val;
    printf("ENTER THE %d ARRAY ELEMENTS: ", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        result = 0;
        num = arr[i];
        len = 0;
        while (num != 0)
        {
            len++;
            num = num / 10;
        }
        num = arr[i];

        while (num != 0)
        {

            x = num % 10;
            val = pow(x, len);
            result = result + val;

            num = num / 10;
        }
        if (arr[i] == result)
            printf("%d IS THE ARMSTRONG NUMBER.\n", arr[i]);
        else
            printf("%d IS NOT ARMSTRONG NUMBER.\n", arr[i]);
    }
}