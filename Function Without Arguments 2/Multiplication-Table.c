#include <stdio.h>

void printMultiplicationTable();    // Function prototype

void main()
{
    printMultiplicationTable();     // Call printMultiplicationTable

    return;
}

void printMultiplicationTable()
{
    int x;

    printf("Enter a number: ");     // Input number
    scanf("%d", &x);

    for (int i = 1; i < 11; i++)   // Print multiplication table of x
    {
        printf("%d * %d = %d", x, i, x * i);

        if (i < 10)                 // Organize multiplication table
        {
            printf("\n");
        }
    }

    return;
}