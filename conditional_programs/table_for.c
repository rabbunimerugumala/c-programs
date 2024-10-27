#include <stdio.h>
void main()
{
    int i, n, t;
    printf("ENTER THE TABLE: ");
    scanf("%d", &t);
    printf("ENTER THE RANGE: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d * %d  =  %d\n", t, i, t * i);
    }
}