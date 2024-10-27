#include <stdio.h>
void main()
{
    void rev(char *);
    char a[50];
    printf("Enter The Sentence: ");
    scanf("%[^\n]*s", &a);
    rev(a);
}
void rev(char *str)
{
    if (*str)
    {
        rev(str + 1);
        printf("%c", *str);
    }
}