#include <stdio.h>

void printStarPattern();    // Function prototype

void main()
{
    printStarPattern();     // Call printStarPattern

    return;
}

void printStarPattern()
{
    int height;      // Variable for height

    printf("Enter height: ");       // Input height of pattern
    scanf("%d", &height);

    if (height <= 0)                // Check input
    {
        printf("Height should be greater than 0.");

        return;
    }

    for (int i = 0; i <= height; i++)   // Print pattern of stars
    {
        for (int j = height - i; j < height; j++)   // Print current layer
        {
            printf("*"); 
        }

        if (i != height && i > 0)   // Next layer
        {
            printf("\n");
        }
    }

    return;
}