#include <stdio.h>

// Function prototype
int numDigits(int);
int toBinary (int, int);

int main()
{
    // Orient user
    printf("This program will convert a decimal number to its binary equivalent.\n");
    
    // Declare variables
    int num, digits, output;

    // Prompt user for decimal number to convert to binary
    printf("Input any decimal number: ");
    scanf("%i", &num);

    // Get number of digits of resulting binary for toBinary function
    digits = numDigits(num);

    // Array for storing binary value
    int binary[digits];

    // Call parity function
    output = toBinary(num, digits);

    // Print converted value
    printf("The Binary value is: %i", output);

    return 0;
}

// Function to get number of digits of resulting binary
int numDigits(int n)
{
    int count = 0;

    while (n != 0)
    {
        n = n / 2;
        count++;
    }
    
    return count;
}

// Function to convert decimal to binary
int toBinary(int n, int c)  // Function definition
{
    int remainder, update, binary = 0, place = 1;

    for (int i = 0; i < c; i++)
    {
        remainder = n % 2;
        update = n / 2;
        n = update;
        binary = binary + remainder * place;
        place = place * 10;
    }
    
    return binary;
}