#include <stdio.h>

void printFibonacci();  // Function prototype

void main()
{
    printFibonacci();   // Call printFibonacci

    return;
}

void printFibonacci()
{
    int x = 0;  // First term
    int y = 1;  // Second term

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            printf ("%d", x);   // Print first term
        }

        if (i == 1)             // Print second term
        {
            printf ("%d", y);
        }

        if (i > 1)             // Print succeeding terms
        {
            int z = x + y;
            printf ("%d", z);
            x = y;
            y = z;
        }
        
        if (i < 9)              // Organize list
        {
            printf(", ");
        }
    }

    return;
}