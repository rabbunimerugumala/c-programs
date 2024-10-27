#include <stdio.h>
void main()
{
    int len, bre, area, perimeter;
    len = 2;
    bre = 4;
    area = len * bre;
    perimeter = 2 * (len + bre);
    printf("LENGTH %d,BREADTH %d\n", len, bre);
    printf("AREA %d\n", area);
    printf("PERIMETER %d\n", perimeter);
}