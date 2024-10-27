#include <stdio.h>
void main()
{
    int a, b;
    int add, sub, mul, squ, cub;
    float div;
    printf("ENTER A VALUE: ");
    scanf("%d", &a);
    printf("ENTER B VALUE: ");
    scanf("%d", &b);
    add = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    squ = a * a;
    cub = a * a * a;

    printf("%d + %d = %d\n", a, b, add);
    printf("%d - %d = %d\n", a, b, sub);
    printf("%d * %d = %d\n", a, b, mul);
    printf("%d / %d = %f\n", a, b, div);
    printf("SQUARE OF %d = %d\n", a, squ);
    printf("CUBE OF %d = %d\n", a, cub);
}