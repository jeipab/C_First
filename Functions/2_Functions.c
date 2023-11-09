#include <stdio.h>
#include <stdlib.h>

// Function prototype
double getSquare (double);

int main()
{
    // Orient user
    printf("This program will get the square of any number.\n");
    
    // Declare variables
    double num, output;
    char strNum[10] = {0};
    char strOutput[100] = {0};

    // Prompt user for number to be squared
    printf("Input any number for square: ");
    scanf("%lf", &num);

    // Call square function
    output = getSquare(num);

    // Convert double num to string
    sprintf(strNum, "%g", num);

    // Convert double output to string
    sprintf(strOutput, "%g", output);

    // Print result (Number of decimal places is adjusted to reflect expected output.)
    printf("The square of %s: %s", strNum, strOutput);

    return 0;
}

// Function to square input
double getSquare (double n)  // Function definition
{
    return (n * n);
}