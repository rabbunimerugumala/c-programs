#include <stdio.h>
void main()
{
    int sum, a, b, c;
    printf("ENTER THE THREE ANGLES OF TRIANGLE: ");
    scanf("%d %d %d", &a, &b, &c);
    sum = a + b + c;
    if (sum == 180)
    {
        printf("%d + %d + %d = %d FORMS A TRIANGLE", a, b, c, sum);
    }
    else
    {
        printf("%d + %d + %d = %d NOT FORMS A TRIANGLE", a, b, c, sum);
    }
}