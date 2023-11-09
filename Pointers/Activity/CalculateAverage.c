#include <stdio.h>

void instruct();                     // Function prototype
void populate(int [], int);
void calculate(int *, int, int *);

int main()
{
    instruct();                         // Call instruct function
    
    int size = 10;                      // Declare and initialize array
    int arr[size];
    int *parr = &arr[0];                // Pointer to array
    int average, *paverage = &average;

    populate(arr, size);                // Call populate function

    calculate(parr, size, paverage);    // Call average function

    printf("Average: %d", *paverage);   // Print result
}

void instruct()                                     // Orient user
{
    printf("This program will calculate the average of 10 integers.\n");
}

void populate(int x[], int s)                       // Populate the array
{
    printf("Input %d elements in the array:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("integer - %d: ", i);
        scanf("%d", &x[i]);
    }
}

void calculate(int *parr, int size, int *paverage)  // Calculate and set average
{
    int sum = 0;                        // Initialize sum variable
    for (int i = 0; i < size; i++)      // Add all elements in the array
    {
        sum += *(parr + i);
    }
    *paverage = sum / size;             // Divide sum by size and assign value to average
}