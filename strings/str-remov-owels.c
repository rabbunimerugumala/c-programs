#include <stdio.h>
void main()
{
    char inp[1000], out[1000];
    printf("ENTER THE STRING: ");
    scanf("%[^\n]s", &inp);
    int j = 0;
    for (int i = 0; inp[i] != '\0'; i++)
    {
        if (!(inp[i] == 'a' || inp[i] == 'e' || inp[i] == 'i' || inp[i] == 'o' || inp[i] == 'u' ||
              inp[i] == 'A' || inp[i] == 'E' || inp[i] == 'I' || inp[i] == 'O' || inp[i] == 'U'))
        {
            out[j] = inp[i];
            j++;
        }
    }
    out[j] = '\0';
    printf("the string is:%s ", out);
}