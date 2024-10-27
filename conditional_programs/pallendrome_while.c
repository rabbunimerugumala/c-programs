#include <stdio.h>
void main()
{
    int x, temp, last, reverse = 0;
    printf("ENTER A NUMBER: ");
    scanf("%d", &x);
    temp = x;
    while (x != 0)
    {
        last = x % 10;
        reverse = (reverse * 10) + last;
        x = x / 10;
    }
    if (reverse == temp)
        printf("%d is pallendrome number ", temp);
    else
        printf("%d is not pallendrome number", temp);
}
