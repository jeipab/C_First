#include <stdio.h>

// Function prototype
void drawHouse();
void drawRoof();
void drawRectangle();
void drawParallel();
void drawBase();

void main() 
{
    drawHouse();        // Call drawHouse function
    return;
}

void drawHouse()        // Call drawRoof, drawRectangle function
{
    drawRoof();
    drawRectangle();
}

void drawRoof()         // Print roof
{
    int heightRoof = 7;
    for (int i = 0; i < heightRoof; i++)
    { 
        for (int j = 0; j < heightRoof + 1 - i; j++)    // Space before forward slash, + 1 to fix alignment
        {
        printf(" ");
        }
        printf("/");        // Print left side of roof
        for (int k = 0; k < i * 2; k++)                 // Space after forward slash
        {
            printf(" ");
        }
        printf("\\\n");     // Print right side of roof
    }
}

void drawRectangle()    // Call drawBase, drawParallel function in an order that will build a rectangle
{
    drawBase();         // Print ceiling
    drawParallel();     // Print walls
    drawBase();         // Print floor
    return;
}

void drawParallel()     // Print walls of house
{
    int heightWalls = 3;
    int lengthBase = 14;
    for(int i = 0; i < heightWalls; i++)
    {
        printf(" ");        // Adjust alignment
        printf("|");        // Wall at left side
        for(int j = 0; j < lengthBase; j++)   // Insert gap between walls
        {
            printf(" ");
        }
        printf("|\n");      // Wall at right side
    }
    return;
}

void drawBase()         // Print base of house
{
    int lengthBase = 14;
    printf("  ");                       // Adjust alignment
    for (int i = 0; i < lengthBase; i+=2)       // Print base
    {
        printf("- ");
    }
    printf("\n");
    return;
}
