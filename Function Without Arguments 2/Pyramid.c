#include <stdio.h>

void printPyramidPattern();    // Function prototype

void main()
{
    printPyramidPattern();     // Call printPyramidPattern

    return;
}

void printPyramidPattern()
{
    int height;     // Height variable

    printf("Enter height: ");       // Input height of pyramid
    scanf("%d", &height);

    if (height <= 0)                // Check input
    {
        printf("Height should be greater than 0.");

        return;
    }

    for (int i = 1; i <= height; i++)                       // Print pyramid pattern
    {
        for (int space = 1; space <= height - i; space++)   // Print space
        {
            printf (" ");    
        }

        for (int star = 1; star <= i * 2 - 1; star++)       // Print star
        {
            printf("*");   
        }

        printf("\n");                                       // Next row
    }

    return;
}