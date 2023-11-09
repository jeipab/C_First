#include <stdio.h>

#define ROW 4
#define COL 4

void instruct();            // Function prototypes
void populate(int [][COL]);
void printMat(int [][COL]);
void printDiagonal(int [][COL]);
void multiplyDiagonal(int [][COL]);

int main()
{
    instruct();             // Call instruct

    int mat[ROW][COL];      // Declare 2D array

    populate(mat);          // Call populate

    printMat(mat);          // Call printMat

    printDiagonal(mat);     // Call printDiagonal

    multiplyDiagonal(mat);  // Call multiplyDiagonal

    return 0;
}

void instruct()                     // Orient user
{
    printf("This program will get the product of the diagonal elements of the matrix.\n");
}

void populate(int x[][COL])         // Populate matrix
{
    int i, j;
    printf("\nEnter %d x %d matrix elements:\n", ROW, COL);
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
}

void printMat(int x[][COL])         // Display matrix
{
    int i, j;
    printf("\nMatrix elements:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\t%d", x[i][j]);
        }
        printf("\n");
    }
    
}

void printDiagonal(int x[][COL])    // Display diagonal elements
{
    int i, j, counter = 1;
    printf("\nDiagonal elements:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < counter; j++)
        {
            printf("\t");           // Alignment
        }

        printf("%d\n", x[i][i]);

        counter++;
    }
}

void multiplyDiagonal(int x[][COL]) // Calculate and display the product of diagonal elements
{
    int i, product = 1;
    for (i = 0; i < ROW; i++)
    {
        product = product * x[i][i];
    }
    printf("Product of diagonal elements: %d\n", product);
}