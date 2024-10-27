#include <stdio.h>
void main()
{
    int x;
    void fact(int);
    printf("enter the value: ");
    scanf("%d", &x);
    fact(x);
}
void fact(int x)
{
    int f = 1;
    if (x == 0)
    {
        printf("%d! = 1", x);
    }
    else

    {
        for (int i = 1; i <= x; i++)
        {
            f = f * i;
        }
        printf("%d! = %d", x, f);
    }
}