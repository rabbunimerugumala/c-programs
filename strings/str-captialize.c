#include <stdio.h>
void main()
{
    char str[1000];
    int i;
    printf("enter the string: ");
    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i == 0 && (str[i] >= 97 && str[i] <= 122))
        {

            str[i] -= 32;
            // printf("%s", str);
        }

        else if (str[i] == ' ' && (str[i + 1] >= 97 && str[i + 1] <= 122))
        {
            str[i + 1] -= 32;
            // printf("%s", str);
        }
    }
    printf("The string is: %s", str);
}