#include <stdio.h>
void main()
{
    char a[10] = {'H', 'E', 'L', 'L', 'O'};
    char *ptr;
    ptr = a;

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %c, ptr = %d\n", i, *ptr, ptr);
        ptr = ptr + 1;
    }
}