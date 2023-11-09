#include <stdio.h>

#define ROW 5
#define COL 5

void instruct();            // Function prototypes
void populate(int [][COL]);
void printMat(int [][COL]);
void findLargest(int [][COL]);
void checkDuplicates(int [][COL], int, int, int);

int main()
{
    instruct();             // Call instruct

    int mat[ROW][COL];      // Declare 2D array

    populate(mat);          // Call populate

    printMat(mat);          // Call printMat

    findLargest(mat);       // Call findLargest

    return 0;
}

void instruct()                     // Orient user
{
    printf("This program will find the largest element in the matrix with its indeces.\n");
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

void findLargest(int x[][COL])      // Find largest element and display it with its indices
{
    int i,j, l = 0, indexRow, indexCol;
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (l < x[i][j])
            {
                l = x[i][j];
                indexRow = i;
                indexCol = j;
            }
        }
    }
    printf("\nLargest element: %d\nLocation: [%d][%d]\n", l, indexRow, indexCol);

    checkDuplicates(x, l, indexRow, indexCol);      // Call checkDuplicates
}

void checkDuplicates(int x[][COL], int y, int yRow, int yCol)   // Check for duplicates
{
    int i, j, duplicateCount = 0;
    printf("\nDuplicates: ");         
    for (i = 0; i < ROW; i++)
    {
        for (j = 0; j < COL; j++)
        {
            if (x[i][j] == y && (i != yRow || j != yCol))
            {
                printf("[%d][%d] ", i, j);
                duplicateCount++;
            }
        }
    }
    if (duplicateCount == 0)
    {
        printf("None\n");
    }

    if (duplicateCount !=0)
    {
        printf("\nNumber of duplicates: %d\n", duplicateCount);
    }
}
