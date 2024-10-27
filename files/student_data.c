#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    FILE *f;
    int size = 2;
    printf("total students: ");
    scanf("%d", &size);
    getchar();
    struct student
    {
        char name[100], dept[4], place[50], roll_num[10], age[3];

    } s[size];
    f = fopen("student.txt", "w+");
    if (f == NULL)
    {
        printf("no file is found");
        exit(1);
    }
    for (int i = 0; i < size; i++)
    {
        printf("NAME: ");
        scanf("%[^\n]%*c", s[i].name);
        printf("ROLL NUM: ");
        scanf("%[^\n]%*c", s[i].roll_num);
        printf("DEPARTMENT: ");
        scanf("%[^\n]%*c", s[i].dept);
        printf("AGE: ");
        scanf("%[^\n]%*c", s[i].age);
        printf("PLACE: ");
        scanf("%[^\n]%*c", s[i].place);

        fputs(s[i].name, f);
        fputs(",", f);
        fputs(s[i].roll_num, f);
        fputs(",", f);
        fputs(s[i].dept, f);
        fputs(",", f);
        fputs(s[i].age, f);
        fputs(",", f);
        fputs(s[i].place, f);
        fputs("\n", f);
    }
}
