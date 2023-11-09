#include <stdio.h>

#define ROW 4
#define COL 4

void instruct();            // Function prototypes
void populate(int [][COL]);
void printMat(int [][COL]);
void addAll(int[][COL]);

int main()
{
    instruct();             // Call instruct

    int mat[ROW][COL];      // Declare 2D array

    populate(mat);          // Call populate

    printMat(mat);          // Call printMat

    addAll(mat);            // Call addAll

    return 0;
}

void instruct()                     // Orient user
{
    printf("This program will calculate the sum all elements in a 4x4 2D array.\n");
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

void addAll(int x[][COL])           // Calculate and display sum of matrix
{
    int i, j, sum = 0;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            sum += x[i][j];
        }
    }

    printf("\nSum of matrix elements:\t%d\n", sum);
}