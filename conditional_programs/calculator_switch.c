#include <stdio.h>
void main()
{
    int a, b, chooseoption;
    printf("*** SIMPLE CALCULATOR ***\n");
    printf("1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n");
    printf("ENTER THE OPTION: ");
    scanf("%d", &chooseoption);
    printf("ENTER THE TWO NUMBER: ");
    scanf("%d%d", &a, &b);
    switch (chooseoption)
    {
    case 1:
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d", a, b, a - b);
        break;
    case 3:
        printf("%d * %d = %d", a, b, a * b);
        break;
    case 4:
        printf("%d / %d = %d", a, b, a / b);
        break;
    default:
        printf("INVALID OPTION");
        break;
    }
}
