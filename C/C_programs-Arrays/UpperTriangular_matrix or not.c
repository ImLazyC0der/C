/**
 * C program to find upper triangular matrix
 For any matrix A if all elements Aij = 0 (Where i ≥ j). Means, if(array[row][col] == 0) and row > col then it is upper triangular matrix.
 */

#include <stdio.h>
#define MAX_ROWS 3
#define MAX_COLS 3

int main()
{
    int array[MAX_ROWS][MAX_COLS];
    int row, col, isUpper;

    /* Input elements in matrix from user */
    printf("Enter elements in matrix of size %dx%d: \n", MAX_ROWS, MAX_COLS);
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            scanf("%d", &array[row][col]);
        }
    }
    
    /* Check Upper triangular matrix condition */
    isUpper = 1;
    for(row=0; row<MAX_ROWS; row++)
    {
        for(col=0; col<MAX_COLS; col++)
        {
            /*
             * If elements below the main diagonal (col<row)
             * is not equal to zero then it is not upper triangular matrix
             */
            if(col<row && array[row][col]!=0)
            {
                isUpper = 0;
            }
        }
    }
    
    /* Print elements of upper triangular matrix  */
    if(isUpper == 1)
    {
        printf("\nThe matrix is Upper triangular matrix.\n");

        for(row=0; row<MAX_ROWS; row++)
        {
            for(col=0; col<MAX_COLS; col++)
            {
                printf("%d ", array[row][col]);
            }

            printf("\n");
        }
    }
    else
    {
        printf("\nThe matrix is not Upper triangular matrix.");
    }

    return 0;
}
