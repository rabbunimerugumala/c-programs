#include <stdio.h>
void main()
{
    int day;
    printf("ENTER THE DAY NUMBER: ");
    scanf("%d", &day);
    if (day == 1)
    {
        printf("THE DAY IS SUNDAY");
    }
    else if (day == 2)
    {
        printf("THE DAY IS MONDAY");
    }
    else if (day == 3)
    {
        printf("THE DAY IS TUESDAY");
    }
    else if (day == 4)
    {
        printf("THE DAY IS WEDNESDAY");
    }
    else if (day == 5)
    {
        printf("THE DAY IS THURSDAY");
    }
    else if (day == 6)
    {
        printf("THE DAY IS FRIDAY");
    }
    else if (day == 7)
    {
        printf("THE DAY IS SATURDAY");
    }
    else
    {
        printf("INVALID NUMBER");
    }
}
