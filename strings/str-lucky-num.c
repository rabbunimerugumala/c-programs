#include <stdio.h>
void main()
{
    int dob, sum, last;
    printf("Enter date of birth (ddmmyyy): ");
    scanf("%d", &dob);

    while (1)
    {
        sum = 0;
        while (dob != 0)
        {
            last = dob % 10;
            sum += last;
            dob /= 10;
        }
        if (sum >= 10)
        {
            dob = sum;
        }
        else
        {
            printf("magic number is %d", sum);
            break;
        }
    }
}