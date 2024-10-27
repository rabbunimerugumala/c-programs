#include <stdio.h>
// #define PI 3.14
void main()
{
    int radius;
    float area, circumference, pi = 3.142;
    printf("ENTER THE RADIUS: ");
    scanf("%d", &radius);
    area = (pi)*radius * radius;
    circumference = 2 * (pi)*radius;
    printf("AREA OF CIRCLE %f\n", area);
    printf("CIRCUMFERENCE OF CIRCLE %f\n", circumference);
}