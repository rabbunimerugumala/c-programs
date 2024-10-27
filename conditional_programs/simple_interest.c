#include <stdio.h>
void main()
{
    int p, t;
    float r, si;
    p = 500;
    t = 1;
    r = 2;
    si = (p * t * r) / 100;
    printf("PRINCIPLE%d,TENURE%d,RATE%f\n", p, t, r);
    printf("SIMPLE INTEREST%f", si);
}
