#include <stdio.h>
void main()
{
    int sub[6], i, total = 0, percentage;
    printf("ENTER THE SUBJECTS MARKS: ");
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &sub[i]);
    }

    for (i = 0; i < 6; i++)
    {
        total = total + sub[i];
    }
    percentage = (total * 100) / 600;
    printf("THE TOTAL MARKS:%d\n", total);
    printf("THE PERCENTAGE:%d\n", percentage);
}