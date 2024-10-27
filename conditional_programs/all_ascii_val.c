#include <stdio.h>
void main()
{
    int i = 1;
    while (i <= 255)
    {
        printf("%d - %c\n", i, i);
        i += 1;
    }
}