#include <stdio.h>
void main()
{
    int rows, cols, i, j;
    printf("ENTER THE ROWS AND COLUMNS OF MATRIX: ");
    scanf("%d%d", &rows, &cols);
    int A[rows][cols], B[rows][cols], R[rows][cols];
    printf("ENTER MATRIX A VALUES:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("ENTER MATRIX b VALUES:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            R[i][j] = A[i][j] - B[i][j];
        }
    }
    printf("\nTHE RESULT MATRIX IS:\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf("%3d", R[i][j]);
        }
        printf("\n");
    }
}