#include <stdio.h>
void main()
{
    int a = 10, b = 20;
    void swap(int, int);

    printf("main - Before Swapping: a = %d, b = %d\n", a, b);
    swap(a, b);
    printf("main - After Swapping: a = %d, b = %d\n", a, b);
}

void swap(int a, int b)
{
    printf("swap - Before Swapping: a = %d, b = %d\n", a, b);
    int temp = a;
    a = b;
    b = temp;
    printf("swap - After Swapping: a = %d, b = %d\n", a, b);
}