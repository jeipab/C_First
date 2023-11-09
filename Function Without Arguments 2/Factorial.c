#include <stdio.h>

void calculateFactorial();    // Function prototype

void main()
{
    calculateFactorial();     // Call calculateFactorial

    return;
}

void calculateFactorial()
{
    int x;

    printf("Enter a number: ");     // Input number
    scanf("%d", &x);

    if (x <= 1)                // Check input
    {
        printf("Input should be greater than 1.");

        return;
    }

    for (int i = x - 1; i != 0; i--)   // Calculate factorial of number
    {
        int y = x * i;
        x = y;

        if (i == 1)
        {
            printf("%d", x);
        }
    }

    return;
}