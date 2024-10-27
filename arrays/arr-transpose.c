#include <stdio.h>
void main()
{
    int rows, cols, i, j;
    printf("ENTER THE SIZE(ROWS,COLUMNS) OF MATRIX: ");
    scanf("%d%d", &rows, &cols);
    int MAT[rows][cols], T[rows][cols];
    printf("ENTER THE VALUES OF THE MATRIX: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &MAT[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            T[j][i] = MAT[i][j];
        }
    }
    printf("THE TRANSPOSE MATRIX IS: \n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%d ", T[i][j]);
        }
        printf("\n");
    }
}