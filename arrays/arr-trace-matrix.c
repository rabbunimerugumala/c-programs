#include <stdio.h>
void main()
{
    int rows, cols, trace = 0, i, j;
    printf("enter the rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    printf("enter the matrix values:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            if (i == j)
            {
                trace = trace + mat[i][j];
            }
        }
    }
    printf("the trace matrix is:%d\n", trace);
}
