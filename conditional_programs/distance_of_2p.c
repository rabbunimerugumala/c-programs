#include <stdio.h>
#include <math.h>
void main()
{
    int distance, x1, x2, y1, y2;
    printf("ENTER THE VALUES OF (X1,Y1): ");
    scanf("%d %d", &x1, &y1);
    printf("ENTER THE VALUES OF (X2,Y2): ");
    scanf("%d %d", &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2)) + (pow(y2 - y1, 2));
    printf("DISTANCE BETWEEN (%d,%d) AND (%d,%d) IS %d", x1, y1, x2, y2);
}