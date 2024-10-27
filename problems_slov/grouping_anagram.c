#include <stdio.h>
#include <string.h>
void main()
{

    char inp[7][10] = {"eat", "ate", "tea", "cat", "atc", "tan", "nat"};
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    void sort(char *);
    char temp[7][10];
    for (int i = 0; i < 7; i++)
    {
        strcpy(temp[i], inp[i]); // copying the inp to temporay
        sort(inp[i]);            // sorting the inp string
    }
    for (int i = 0; i < 7; i++)
    {
        if (visited[i] == 1)
        {
            continue;
        }
        printf("[ %s ", temp[i]);
        visited[i] = 1;
        for (int j = i + 1; j < 7; j++)
        {
            if (strcmp(inp[i], inp[j]) == 0)
            {
                visited[j] = 1;
                printf("%s ", temp[j]);
            }
        }
        printf("]\n");
    }
}
void sort(char *str)
{
    // puts(str);
    char temp;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] > str[j])
            {
                // printf("%c %c", str[i], str[j]);
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
