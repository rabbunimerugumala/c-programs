#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    FILE *f;
    char message[100];
    f = fopen("student.txt", "w+");
    if (f == NULL)
    {
        printf("NO FILE IS FOUND");
        exit(1);
    }
    while (1)
    {

        gets(message);

        if (strlen(message) == 0)
        {
            break;
        }
        fputs(message, f);
        fputs("\n", f);
    }
    fclose(f);
}
