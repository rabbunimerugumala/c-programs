#include <stdio.h>
void main()
{
    int num;
    printf("ENTER A NUMBER: ");
    scanf("%d", &num);
    if (num != 0)
    {
        printf("GIVEN NUMBER %d IS NON ZERO ", num);
    }
}