#include <stdio.h>
void main()
{
    int i = 3, j;
    printf("Address Of i :%u\n", &i);
    j = i;
    printf("Address Of j :%u\n", &j);
}