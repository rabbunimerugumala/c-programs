#include <stdio.h>
void main()
{
    int x = 5, f;
    int fact(int);
    f = fact(x);
    printf("%d!=%d", x, f);
}
int fact(int x)
{
    if (x == 0)
        return 1;
    else
        return x * fact(x - 1);
}