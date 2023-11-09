#include <stdio.h>

// Function prototype
int arraySum (int [], int);

int main()
{
    // Orient user
    printf("This program will get the sum of all your inputs.\n");
    
    // Declare variables
    int size = 0, output;

    // Get size of addend array
    while (size < 2)
    {
        // Input number of elements to be added
        printf("Input the number of elements to be stored in the array: ");
        scanf("%i", &size);

        // Check validity of input
        if (size < 2)
        {
            printf("There should be at least two elements.\n");
        }
    }
    
    // Array for storing elements
    int addend[size];

    // Prompt user for addends and store it to addend array
    printf("Enter %i numbers.\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("element - %i: ", i);
        scanf("%i", &addend[i]);
    }

    // Call sum function
    output = arraySum(addend, size);

    // Print result
    printf("The total is: %i", output);

    return 0;
}

// Function to add all inputs
int arraySum(int arr[], int n) // Function definition
{
    int i, sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    return sum;
}