#include <stdio.h>
void main()
{
    char str1[1000], str2[1000], format1[1000], format2[1000];
    printf("enter the first string value: ");
    scanf("%[^\n]%*c", str1);

    printf("enter the second string value: ");
    scanf("%[^\n]%*c", str2);
    int j = 0;
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != ' ')
        {
            format1[j] = str1[i];
            j++;
        }
    }
    format1[j] = '\0';
    j = 0;
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != ' ')
        {
            format2[j] = str2[i];
            j++;
        }
    }
    format2[j] = '\0';

    for (int i = 0; format1[i] != '\0'; i++)
    {
        if (format1[i] >= 65 && format1[i] <= 90)

        {
            format1[i] += 32;
        }
    }
    for (int i = 0; format2[i] != '\0'; i++)
    {
        if (format2[i] >= 65 && format2[i] <= 90)

        {
            format2[i] += 32;
        }
    }

    // printf("%s", format1);
    // printf("%s", format2);
    int flag;
    for (int i = 0; format2[i] != '\0'; i++)
    {
        flag = 0;
        for (j = 0; format1[j] != '\0'; j++)
        {
            if (format1[i] == format2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            printf(" NOT ANAGRAM");

            break;
        }
    }

    if (flag == 1)
    {
        printf("anagram");
    }
}