#include <stdio.h>
void main()
{
    int p1, p2, p3;
    printf("ENTER THE PERSONS AGES: ");
    scanf("%d %d %d", &p1, &p2, &p3);
    if (p1 < p2 && p1 < p3)
    {
        printf("PERS0N1-%d is youngest", p1);
    }
    else if (p2 < p1 && p2 < p3)
    {
        printf("PERSON2-%d is youngest", p2);
    }
    else //(p3 < p1 && p3 < p2)
    {
        printf("PERSON3-%d is youngest", p3);
    }
}