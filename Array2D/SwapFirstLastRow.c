#include <stdio.h>

#define ROW 4
#define COL 4

void instruct();            // Function prototypes
void populate(int [][COL]);
void printMat(int [][COL]);
void swap(int [][COL]);
void printMod(int [][COL]);

int main()
{
    instruct();             // Call instruct

    int mat[ROW][COL];      // Declare 2D array

    populate(mat);          // Call populate

    printMat(mat);          // Call printMat

    swap(mat);              // Call swap

    printMod(mat);          // Call printMod

    return 0;
}

void instruct()                     // Orient user
{
    printf("This program will swap the first and last row of the matrix.\n");
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

void swap(int x[][COL])             // Swap first and last row elements
{
    int i, temp;

    for (i = 0; i < ROW; i++)
    {
        temp = x[0][i];
        x[0][i] = x[ROW-1][i];
        x[ROW-1][i] = temp;
    }
}

void printMod(int x[][COL])         // Print modified matrix
{
    int i, j;
    printf("\nModified matrix:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\t%d", x[i][j]);
        }
        printf("\n");
    }
}