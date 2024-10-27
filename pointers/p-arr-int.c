#include <stdio.h>
void main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8};
    int *ptr;
    ptr = a;

    for (int i = 0; i < 8; i++)
    {
        printf("a[%d] = %d, ptr = %d\n", i, *ptr, ptr);
        ptr = ptr + 1;
    }
}