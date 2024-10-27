#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *fr, *fa;
    char ch;
    fr = fopen("demo.txt", "r");
    if (fr == NULL)
    {
        printf("no file found");
        exit(1);
    }
    fa = fopen("student.txt", "a");
    if (fa == NULL)
    {
        printf("no file found for appending");
        exit(1);
    }
    while (1)
    {
        ch = fgetc(fr);
        if (ch == EOF)
        {
            printf("\nfile reached to end\n");
            break;
        }
        fputc(ch, fa);
    }
    fclose(fr);
    fclose(fa);
}
