#include <stdio.h>
void main()
{
    int n, i, f, f1 = 0, f2 = 1;
    printf("ENTER THE N VALUE: ");
    scanf("%d", &n);
    for (i = 0; i <= n - 2; i++)
    {
        f = f1 + f2;
        printf("%d\t", f);
        f1 = f2;
        f2 = f;
    }
}