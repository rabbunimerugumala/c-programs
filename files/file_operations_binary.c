#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[100];
    char rollno[10];
    int age;
    char dept[4];
} s;
void main()
{

    void write_student_data(char *, struct student);
    void read_student_data(char *, struct student);
    void update_student_data(char *, struct student);
    char filename[50];
    strcpy(filename, "student.dat"); // copying the filename

    // writing the student dsta to file
    write_student_data(filename, s);
    read_student_data(filename, s);
}

// function to  write the data file
void write_student_data(char *filename, struct student s)
{
    FILE *fp;
    fp = fopen(filename, "wb");
    if (fp == NULL)
    {
        printf("%s is not found!", filename);
        exit(1);
    }

    char choice = 'Y';
    while (choice == 'Y')
    {
        printf("Enter Student Details\n");
        printf("Name: ");
        scanf("%[^\n]%*c", s.name);
        printf("Roll Number: ");
        scanf("%[^\n]%*c", s.rollno);
        printf("Age: ");
        scanf("%d", &s.age);
        getchar(); // for handling of extra new line for reading numbers
        printf("Department: ");
        scanf("%[^\n]%*c", s.dept);

        fwrite(&s, sizeof(s), 1, fp);

        printf("Do you want to add another record? (Y/N):  ");
        scanf("%c", &choice);
        getchar();
    }
    fclose(fp);
}

void read_student_data(char *filename, struct student s)
{
    FILE *fp;
    fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        printf("%s is not found!", filename);
        exit(1);
    }

    printf("\nDisplaying Student Data\n");
    while (fread(&s, sizeof(s), 1, fp) == 1)
    {
        printf("Name: %s\n", s.name);
        printf("Roll Number: %s\n", s.rollno);
        printf("Age: %d\n", s.age);
        printf("Department: %s\n", s.dept);
    }
    fclose(fp);
}
