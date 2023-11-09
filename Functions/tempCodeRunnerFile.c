#include <stdio.h>

// Function prototype
int getLargest(int *arr, int n, int a);

int main()
{
    // Orient user
    printf("This program will get the largest element from all the inputs.\n");
    
    // Declare variables
    int size = 0, output;

    // Get size
    while (size < 1)
    {
        // Input number of elements to be added
        printf("Input the number of elements to be stored in the array: ");
        scanf("%i", &size);

        // Check validity of input
        if (size < 1)
        {
           printf("There should be at least one elements in the array.\n");
        }
    }

    // Array for storing elements
    int input[size];

    // Prompt user for input and store it to input array
    printf("Input %i elements in the array: \n", size);
    for (int i = 0; i < size; i++)
    {
        printf("element - %i: ", i);
        scanf("%i", &input[i]);
    }

    // Call function to get largest element
    output = getLargest(input, size - 1, input[0]);

    // Print result
    printf("The largest element in the array is: %i", output);

    return 0;
}

// Function to get largest element, implemented recursion
int getLargest(int *arr, int n, int a)  // Function definition
{
    if (n < 0) // Base case, there is only one element left
    {
        return a;
    }
    else
    {
        if (a < *arr) // Compare then get larger
        {
            a = *arr;
        }

        return getLargest(++arr, --n, a); // Function calling itself
    }
}