#include <stdio.h>
void main()
{
    struct book
    {
        char b_name[100];
        char b_author[100];
        float price[3];
        int pages[3];

    } b;
    printf("ENTER THE BOOK NAME: ");
    scanf("%s", b.b_name);
    printf("ENTER THE NAME OF BOOK AUTHOR: ");
    scanf("%s", b.b_author);
    printf("ENTER THE PRICE OF BOOK : ");
    scanf("%f", b.price);
    printf("ENTER THE PAGES IN BOOK : ");
    scanf("%d", b.pages);
}