#include <stdio.h>
void main()
{
    char inp_str[1000], format[1000], reverse[1000];
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", inp_str);
    printf("ORIGINAL STRING: %s\n", inp_str);
    int j = 0, length = 0, flag = 0;
    for (int i = 0; inp_str[i] != '\0'; i++)
    {
        if (inp_str[i] != ' ')
        {
            format[j] = inp_str[i];
            j++;
        }
    }
    format[j] = '\0';
    for (int i = 0; format[i] != '\0'; i++)
    {
        length++;
        if (format[i] >= 65 && format[i] < 90)
        {
            format[i] = format[i] + 32;
        }
    }
    j = 0;
    for (int i = length - 1; i >= 0; i--)
    {
        reverse[j] = format[i];
        j++;
    }
    reverse[length] = '\0';
    printf("the reverse string: %s\n", reverse);
    for (int i = 0; reverse[i] != '\0'; i++)
    {
        if (format[i] != reverse[i])
        {
            printf("not a pallenderome\n");
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("PALLENDEROME\n");
    }
}