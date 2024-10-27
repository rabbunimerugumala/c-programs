#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *f;
    char ch;
    int count = 0, lin_count = 0, spaces = 0, tabs = 0;
    f = fopen("reading.c", "r");
    if (f == NULL)
    {
        printf("no file found");
        exit(1);
    }
    while (1)
    {
        ch = fgetc(f);
        if (ch == EOF)
        {
            break;
        }
        if (ch == '\n')
        {
            lin_count++;
        }
        if (ch == ' ')
        {
            spaces++;
        }
        if (ch == '\t')
        {
            tabs++;
        }
        count++;
        printf("%c", ch);
    }
    fclose(f);
    printf("\ntotal chars=%d\n", count);
    printf("TOTAL NUMBER OF LINES=%d\n", lin_count);
    printf("NUMBER OF SPACES=%d\n", spaces);
    printf("NUMBER OF TABS=%d\n", tabs);
}
