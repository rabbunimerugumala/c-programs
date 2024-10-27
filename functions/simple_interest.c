#include <stdio.h>
void main()
{
    int p, t;
    float r, si;
    float cal_si(int, int, float);
    printf("enter the principle,tenure and rate of interest: ");
    scanf("%d %d %f", &p, &t, &r);
    si = cal_si(p, t, r);
    // cal_si2(p,t,r);
    // si=cal_si3();
    // cal_si4();
    printf("simple interest is: %.2f", si);
}

// with return type with params
float cal_si(int p, int t, float r)
{
    return (p * t * r) / 100;
}
// without return type with params
void cal_si2(int p, int t, float r)
{
    float si = (p * t * r) / 100;
    printf("simple interest is: %.2f", si);
}

// with return type without params
float cal_si3()
{
    int p, t;
    float r;
    printf("enter the principle,tenure and rate of interest: ");
    scanf("%d %d %f", &p, &t, &r);
    return (p * t * r) / 100;
}
// without return type without params
void cal_si4()
{
    int p, t;
    float r;
    printf("enter the principle,tenure and rate of interest: ");
    scanf("%d %d %f", &p, &t, &r);
    float si = (p * t * r) / 100;
    printf("simple interest is: %.2f", si);
}