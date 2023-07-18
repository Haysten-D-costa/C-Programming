#include <stdio.h>

int main()
{
    int A[5][5], B[5][5], C[5][5];
    int r1, r2, c1, c2, i, j;

    printf("\nEnter the order of matrix-A : ");
    scanf("%d%d", &r1, &c1);
    printf("Enter the order of matrix-B : ");
    scanf("%d%d", &r2, &c2);
    if ((r1 == r2) && (c1 == c2))
    {
        printf("\nEnter the elements of matrix-A : ");
        for (i = 0; i < r1; i++)
            for (j = 0; j < c1; j++)
                scanf("%d", &A[i][j]);
        printf("\nEnter the elements of matrix-B : ");
        for (i = 0; i < r2; i++)
            for (j = 0; j < c2; j++)
                scanf("%d", &B[i][j]);
        // OUTPUT OF USER INPUTED MATRICES...
        printf("\nMatrix A entered is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", A[i][j]);
            }
            printf("\n");
        }
        printf("\nMatrix B entered is :\n");
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                printf("%d\t", B[i][j]);
            }
            printf("\n");
        }
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                C[i][j] = A[i][j] - B[i][j];
            }
        }
        printf("\nThe resultant matrix (A - B) is :\n");
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                printf("%d\t", C[i][j]);
            }
            printf("\n");
        }
    }
    else
        printf("\nInvalid orders entered....");
    return (0);
}
