#include <stdio.h>
void main()
{
    int num;
    printf("ENTER THE NUMBER: ");
    scanf("%d", &num);

    num % 2 == 0 ? printf("%d is even number\n", num) : printf("%d is odd number\n", num);
}
