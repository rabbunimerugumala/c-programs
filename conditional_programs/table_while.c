#include <stdio.h>
void main()
{
    int i, t, n;
    printf("ENTER THE TABLE: ");
    scanf("%d", &t);
    printf("ENTER THE RANGE: ");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        printf("%d*%d=%d\n", t, i, t * i);
        i++;
    }
}