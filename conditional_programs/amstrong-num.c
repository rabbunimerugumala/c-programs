#include <stdio.h>
#include <math.h>
void main()
{
    int num, x, r, n, result = 0, len = 0;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);
    n = num;
    while (n != 0)
    {
        len = len + 1;
        n = n / 10;
    }
    n = num;
    while (n > 0)
    {
        r = n % 10;
        result = result + pow(r, len);
        n = n / 10;
    }
    if (num == result)
        printf("%d IS AMSTRONG NUMBER.", num);
    else
        printf("%d IS NOT AMSTRONG NUMBER.", num);
}