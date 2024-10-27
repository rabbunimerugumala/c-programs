#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
    char name[50];
    char rollno[12];
    char email[50];
    char phone_number[12];
    char dob[12];
} s;

void main()
{
    char filename[100] = "student_data.dat";
    int choice;

    // function declaration
    void print_title();
    void print_menu();
    void register_students(char *);
    void display_student_data(char *);
    void update_student_data(char *);

    print_title();
    while (choice != 5)
    {
        print_menu();

        fflush(stdin);
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            register_students(filename);
            break;
        case 2:
            update_student_data(filename);
            break;
        case 4:
            display_student_data(filename);
            break;
        case 5:
            break;
        default:
            printf("*** Error: Invalid choice entered ***\n");
        }
    }
}

void print_title()
{
    printf("\n*****************************\n");
    printf("* STUDENT MANAGEMENT SYSTEM *\n");
    printf("*****************************\n");
}

void print_menu()
{
    printf("\nMENU\n");
    printf("1. Register a new student(s).\n");
    printf("2. Update student details.\n");
    printf("3. Delete student details.\n");
    printf("4. Print student details.\n");
    printf("5. Exit\n");
    printf("\nEnter your choice: ");
}

void register_students(char *filename)
{
    FILE *fp;
    fp = fopen(filename, "ab");
    if (fp == NULL)
    {
        printf("Not able to open the file %s\n", filename);
        exit(1);
    }
    char choice = 'Y';
    while (choice == 'Y')
    {
        printf("Enter student data\n");
        printf("Name: ");
        fflush(stdin);
        scanf("%[^\n]%*c", s.name);

        fflush(stdin);
        printf("Roll Number: ");
        scanf("%[^\n]%*c", s.rollno);

        fflush(stdin);
        printf("Email: ");
        scanf("%[^\n]%*c", s.email);

        fflush(stdin);
        printf("Phone Number: ");
        scanf("%[^\n]%*c", s.phone_number);

        fflush(stdin);
        printf("Date of Birth: ");
        scanf("%[^\n]%*c", s.dob);

        fwrite(&s, sizeof(struct student), 1, fp);

        fflush(stdin);
        printf("Want to add anothe student data?(Y/N): ");
        scanf("%c", &choice);
    }
    fclose(fp);
}

void display_student_data(char *filename)
{
    FILE *fp;
    fp = fopen(filename, "rb");
    if (fp == NULL)
    {
        printf("Not able to open the file %s\n", filename);
        exit(1);
    }

    printf("\nSTUDENT DATA\n");
    while (fread(&s, sizeof(struct student), 1, fp) == 1)
    {

        printf("\nName: %s\n", s.name);
        printf("Roll Number: %s\n", s.rollno);
        printf("Email: %s\n", s.email);
        printf("Phone Number: %s\n", s.phone_number);
        printf("Date of Birth: %s\n", s.dob);
    }
    fclose(fp);
}

void update_student_data(char *filename)
{
    FILE *fr, *fa;
    char rollno[10], email[50];
    fr = fopen(filename, "rb");
    fa = fopen("student_copy.dat", "ab");
    if (fr == NULL || fa == NULL)
    {
        printf("Not able to open the files\n");
        exit(1);
    }

    printf("Enter the Student\n");
    printf("Roll Number to update: ");
    fflush(stdin);
    scanf("%[^\n]%*c", rollno);

    printf("Enter the new email address: ");
    fflush(stdin);
    scanf("%s", email);
    fflush(stdin);

    while (fread(&s, sizeof(struct student), 1, fr) == 1)
    {
        // if (strcmp(rollno, s.rollno) == 0)
        // {
        //     strcpy(s.email, email);
        //     fwrite(&s, sizeof(struct student), 1, fa);
        // }
        // else
        // {
        //     fwrite(&s, sizeof(struct student), 1, fa);
        //     // printf("Roll Number not matched!\n");
        // }
        printf("%s\n%s\n%s\n%s", s.name, s.email, s.phone_number, s.dob);
        break;
    }
    fclose(fa);
    fclose(fr);
    // rename("student_copy.dat", filename);
    // remove(filename);
    printf("*** Success: Student Data updated successfully ***\n");
}