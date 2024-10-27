#include <stdio.h>
void main()
{
    int x;
    void is_prime(int);
    printf("ENTER THE NUMBER: ");
    scanf("%d", &x);
    is_prime(x);
}
void is_prime(int x)
{
    int i, flag = 0;
    for (i = 2; i < x; i++)
    {
        if (x % i == 0)
        {
            printf("THE %d IS NOT PRIME NUMBER.", x);
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("THE %d IS PRIME NUMBER.", x);
    }
}
