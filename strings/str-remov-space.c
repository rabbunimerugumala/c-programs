#include <stdio.h>
void main()
{
    char str1[100], str2[100];
    int i, j = 0;
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", &str1);
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != ' ')
        {
            str2[j] = str1[i];
            j++;
        }
    }
    str2[j] = '\0';
    printf("THE STRING IS:%s", str2);
}