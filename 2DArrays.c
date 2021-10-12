#include <stdio.h>
#include <stdlib.h>

void addition()
{
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\nEnter elements of FIRST matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter elements of SECOND matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", sum[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
}

void subtraction()
{
    int r, c, a[100][100], b[100][100], sub[100][100], i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\nEnter elements of FIRST matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter elements of SECOND matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }

    printf("\nSubtraction of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", sub[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
}
void multiplication()
{
    int r, c, a[100][100], b[100][100], mul[100][100], i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\nEnter elements of FIRST matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEnter elements of SECOND matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            mul[i][j] = a[i][j] * b[i][j];
        }

    printf("\nProduct of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("%d   ", mul[i][j]);
            if (j == c - 1)
            {
                printf("\n\n");
            }
        }
}
void transpose()
{
    int r, c, a[100][100], b[100][100], i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);
    printf("\nEnter elements of matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter element A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("\nEntered matrix: \n");
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            printf("%d  ", a[i][j]);
            if (j == c - 1)
                printf("\n");
        }

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
        {
            b[j][i] = a[i][j];
        }

    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < c; ++i)
        for (int j = 0; j < r; ++j)
        {
            printf("%d  ", b[i][j]);
            if (j == r - 1)
                printf("\n");
        }
}

int main()
{
    int choice, item;
    while (1)
    {
        printf("\n ~~~~Operations on 2D Arrays~~~~\n");
        printf("\n 1.Addition\n");
        printf(" 2.Subtraction\n");
        printf(" 3.Multiplication\n");
        printf(" 4.Transpose\n");
        printf(" 5.Quit");
        printf("\nEnter your choice : ");

        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            transpose();
            break;
        case 5:
            printf("\nQuitting program......\n\n");
            exit(1);
        default:
            printf("\nERROR: Enter valid choice !!\n");
        }
    }
    return 0;
}
