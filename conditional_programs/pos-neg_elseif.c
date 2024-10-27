#include <stdio.h>
void main()
{
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);
    if (num == 0)
        printf("ZERO");
    else if (num > 0)
        printf("%d IS POSITIVE", num);
    else
        printf("%d IS NEGATIVE", num);
}