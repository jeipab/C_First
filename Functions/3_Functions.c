#include <stdio.h>

// Function prototype
int parity (int);

int main()
{
    // Orient user
    printf("This program will check if the given number is even or odd.");
    
    // Declare variables
    int num, output;

    // Prompt user for number to check
    printf("\nInput any number: ");
    scanf("%i", &num);

    // Call parity function
    output = parity(num);

    // Print result if even or odd
    if (output == 0)
    {
        printf("The entered number is even.");
    }
    else
    {
        printf("The entered number is odd.");
    }

    return 0;
}

// Function to check if even or odd
int parity (int n)  // Function definition
{
    return (n % 2);
}