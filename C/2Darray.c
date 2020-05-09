#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//
// Print row sums of a matrix. Notice how the left
// subscript of the 2D array parameter is left blank.
//
void matrixSum(int mat[][5], int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        int sum = 0;

        for (j = 0; j < c; j++)
        {
            sum += mat[i][j];
        }

        printf("Row %2d sum: %d\n", i+1, sum);
    }
}

//
// Print row sums of a matrix. Here mat is a integer pointer
// that should be passed the address of the first element
// of the matrix.
//
void matrixSum2(int *mat, int r, int c)
{
    int i, j;

    for (i = 0; i < r; i++)
    {
        int sum = 0;

        for (j = 0; j < c; j++)
        {
            // Using pointer arithmatic. mat[i][j] cannot be
            // used here, because mat is one dimensional pointer
            sum += *(mat + j + i * c);
        }

        printf("Row %2d sum: %d\n", i+1, sum);
    }
}


int main()
{
    // 2D array with initialization
    int mat[10][5] = {
        {1, 2, 3, 4, 5},
        {11, 12, 13, 14, 15},
        {21, 22, 23, 24, 25},
        {31, 32, 33, 34, 35},
        {41, 42, 43, 44, 45},
        {51, 52, 53, 54, 55},
        {61, 62, 63, 64, 65},
        {71, 72, 73, 74, 75},
        {81, 82, 83, 84, 85},
        {91, 92, 93, 94, 95},
    };

    int n, i;
    int *q;

    // passing the 2d array to a 2d array parameter
    // (call by reference)
    matrixSum(mat, 10, 5);
    printf("\n");

    // passing the 2d array to a 1d pointer parameter
    // (This is also call by reference)
    matrixSum2(mat[0], 10, 5);
    printf("\n");

    matrixSum2(&mat[0][0], 10, 5);
    printf("\n");

    matrixSum2((int*) mat, 10, 5);
    printf("\n");

    getch();
    return 0;
}
