#include <stdio.h>
void main()
{
    int x = 10;
    int *ptr;

    ptr = &x;

    printf("the address of %d is %d\n", x, &x);
    printf("The value in ptr %d\n", ptr);
    printf("The value in ptr - %d is %d\n", ptr, *ptr);

    *ptr = 20;

    printf("x = %d\n", x);
    printf("ptr = %d\n", ptr);
    printf("*ptr = %d\n", *ptr);
}