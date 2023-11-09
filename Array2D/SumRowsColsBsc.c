#include <stdio.h>

#define ROW 3
#define COL 3

void instruct();            // Function prototypes
void populate(int [][COL]);
void printMat(int [][COL]);
void sumRow(int [][COL]);
void sumCol(int [][COL]);


int main()
{
    instruct();             // Call instruct

    int mat[ROW][COL];      // Declare 2D array

    populate(mat);          // Call populate

    printMat(mat);          // Call printMat

    sumRow(mat);            // Call sumRow

    sumCol(mat);            // Call sumCol

    return 0;
}

void instruct()                     // Orient user
{
    printf("This program will calcualte the sum of each rown and each column.\n");
}

void populate(int x[][COL])         // Populate matrix
{
    int i, j;
    printf("Enter %d x %d matrix elements:\n", ROW, COL);
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
    printf("Matrix elements:\n");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\t%d", x[i][j]);
        }
        printf("\n");
    }
}

void sumRow(int x[][COL])           // Calculate and display sum of each row
{
    printf("ROWS\n");
    int i, j, sum = 0, rowNum = 0;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            sum += x[rowNum][j];
            if (j == COL - 1)
            {
                printf("Row %d sum:\t%d\n", rowNum, sum);
                rowNum++;
                sum = 0;
            }
        } 
    }
}

void sumCol(int x[][COL])           // Calculate and display sum of each column
{
    printf("COLUMNS\n");
    int i, j, sum = 0, colNum = 0;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            sum += x[j][colNum];
            if (j == COL - 1)
            {
                printf("Column %d sum:\t%d\n", colNum, sum);
                colNum++;
                sum = 0;
            }
        } 
    }
}