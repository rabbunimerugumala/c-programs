#include <stdio.h>
void main()
{
    int tel, hin, eng, mat, sci, soc;
    int total;
    float percentage;
    printf("ENTER TEL MARKS: ");
    scanf("%d", &tel);
    printf("ENTER HIN MARKS: ");
    scanf("%d", &hin);
    printf("ENTER ENG MARKS: ");
    scanf("%d", &eng);
    printf("ENTER MAT MARKS: ");
    scanf("%d", &mat);
    printf("ENTER SCI MARKS: ");
    scanf("%d", &sci);
    printf("ENTER SOC MARKS: ");
    scanf("%d", &soc);
    total = tel + hin + eng + mat + sci + soc;
    percentage = (total * 100) / 600;
    printf("TOTAL MARKS = %d\n", total);
    printf("PERCENTAGE = %f\n", percentage);
}