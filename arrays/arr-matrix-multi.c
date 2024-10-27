#include <stdio.h>
void main()
{
    int r1, c1, r2, c2;
    printf("ENTER THE SIZE(ROW1,COL1) OF A MATRIX: ");
    scanf("%d%d", &r1, &c1);
    printf("ENTER THE SIZE (ROW2,COL2) OF A MATRIX: ");
    scanf("%d%d", &r2, &c2);
    if (c1 != r2)
    {
        printf("THE MATRIX MULTIPLICATION IS NOT POSSIBLE:\n");
    }
    else
    {
        int A[r1][c1], B[r2][c2], R[r1][c2];
        printf("ENTER MATRIX A VALUES: \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c1; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }
        printf("ENTER MATRIX B VALUES: \n");
        for (int i = 0; i < r2; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                R[i][j] = 0;
                for (int k = 0; k < c1; k++)
                {
                    R[i][j] = R[i][j] + (A[i][k] * B[k][j]);
                }
            }
        }
        printf("THE RESULT MATRIX IS: \n");
        for (int i = 0; i < r1; i++)
        {
            for (int j = 0; j < c2; j++)
            {
                printf("%d ", R[i][j]);
            }
            printf(" \n");
        }
    }
}
