#include <stdio.h>
void main()
{
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("POSITIVE NUMBER: ");
    }
    else
    {
        printf("NEGATIVE NUMBER: ");
    }
}
