#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *f;
    char ch;
    f = fopen("demo.txt", "r");
    if (f == NULL)
    {
        printf("file not found");
        exit(1);
    }
    printf("file is found\n");
    while (1)
    {
        ch = fgetc(f);
        if (ch == EOF)
        {
            printf("\nfile reached to end\n");
            break;
        }
        printf("%c", ch);
    }
    fclose(f);
}
