#include <stdio.h>
void main()
{
    float a[10] = {0.1, 1.1, 2.2, 3.3, 4.4, 5.5};
    float *ptr;
    ptr = a;

    for (int i = 0; i < 5; i++)
    {
        printf("a[%d] = %.2f, ptr = %d\n", i, *ptr, ptr);
        ptr = ptr + 1;
    }
}