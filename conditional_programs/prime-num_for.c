#include <stdio.h>
void main()
{
    int x, i, count = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &x);
    for (i = 2; i < x - 1; i++)
    {
        if (x % i == 0)
        {
            count++;
            break;
        }
    }
    if (count != 0)
    {
        printf("%d is not a prime number", x);
    }
    else
    {
        printf("%d is a prime number", x);
    }
}
