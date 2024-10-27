#include <stdio.h>
void main()
{
    int a = 10, b = 20;
    int *ptr1, *ptr2;
    void swap(int *, int *);

    ptr1 = &a;
    ptr2 = &b;
    printf("main - Before Swapping: a = %d, b = %d\n", a, b);
    swap(ptr1, ptr2);
    printf("main - After Swapping: a = %d, b = %d\n", a, b);
}

void swap(int *a, int *b)
{
    printf("swap - Before Swapping: a = %d, b = %d\n", *a, *b);
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("swap - After Swapping: a = %d, b = %d\n", *a, *b);
}
