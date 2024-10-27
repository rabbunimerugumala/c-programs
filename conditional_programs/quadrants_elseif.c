#include <stdio.h>
void main()
{
    int x, y;
    printf("ENTER THE COORDINATES(X,Y): ");
    scanf("%d %d", &x, &y);
    if (x > 0 && y > 0)
    {
        printf("(%d,%d) is in Q1", x, y);
    }
    else if (x < 0 && y > 0)
    {
        printf("(%d,%d) is in Q2", x, y);
    }
    else if (x < 0 && y < 0)
    {
        printf("(%d,%d) is in Q3", x, y);
    }
    else //(x > 0 && y < 0 )
    {
        printf("(%d,%d) is in Q4", x, y);
    }
}