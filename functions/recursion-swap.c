#include <stdio.h>
int main()
{
    void swap(int, int);
    int x, y;
    printf("Enter The Value Of x,y: ");
    scanf("%d%d", &x, &y);
    printf("Before swaping\nx=%d\ny=%d\n", x, y);
    swap(x, y);
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
    printf("Afer Swaping\nx=%d\ny=%d\n", x, y);
}