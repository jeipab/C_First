#include <stdio.h>

#define ROW 3
#define COL 3

void instruct();            // Function prototypes
void populate(int [][COL]);
void printMat(int [][COL]);
void sumRow(int [][COL], int []);
void sumCol(int [][COL], int[]);
void printMatSum(int [][COL], int [], int[]);


int main()
{
    instruct();             // Call instruct

    int mat[ROW][COL];      // Declare 2D array

    int rowSum[ROW];        // Array for storing row sums

    int colSum[COL];        // Array for storing column sums

    populate(mat);          // Call populate

    printMat(mat);          // Call printMat

    sumRow(mat, rowSum);                // Call sumRow

    sumCol(mat, colSum);                // Call sumCol

    printMatSum(mat, rowSum, colSum);   // Call printMatSum

    return 0;
}

void instruct()                     // Orient user
{
    printf("This program will calcualte the sum of each row and each column.\n");
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

void sumRow(int x[][COL], int y[ROW])               // Calculate and display sum of each row
{
    printf("\nROWS\n");
    int i, j, sum, rowNum = 0;
    for (i = 0; i < ROW; i++)
    {
        sum = 0;
        for (j = 0; j < COL; j++)
        {
            sum += x[rowNum][j];

        }
        y[i] = sum;
        printf("Row %d sum: %d\n", rowNum, sum);
        rowNum++;
    }
}

void sumCol(int x[][COL], int y[COL])               // Calculate and display sum of each column
{
    printf("COLUMNS\n");
    int i, j, sum = 0, colNum = 0;
    for (i = 0; i < ROW; i++)
    {
        sum = 0;
        for (j = 0; j < COL; j++)
        {
            sum += x[j][colNum];
        }
        y[i] = sum;
        printf("Column %d sum: %d\n", colNum, sum);
        colNum++;
    }
}

void printMatSum(int x[][COL], int y[], int z[])    // Display matrix with column and row for sum
{
    int i, j, counter = 0;
    
    printf("\nMatrix with SUM row and SUM column:\n");

    while(counter < COL + 1)
    {
        printf("\t");
        counter++;
    }
    printf("SUM\n");
    counter = 0;
    
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            printf("\t%d", x[i][j]);
            counter++;
            if (counter == COL)
            {
                printf("\t%d", y[i]);
                counter = 0;
            }
        }
        printf("\n");
    }
    printf("SUM");
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (j == COL - 1)
            {
                printf("\t%d", z[i]);
                counter++;
            }
        } 
    }
}