#include <stdio.h>
void main()
{
    int year;
    printf("ENTER THE YEAR: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("%d IS LEAP YEAR\n", year);
    }
    else
    {
        printf("%d Is NOT leap year\n", year);
    }
}
