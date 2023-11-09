#include <stdio.h>

void populate(int [], int);     // Function prototype  

void main()
{
    int size = 5;               // Declare and initialize array
    int arr[size];   
    int *parr = &arr[0];        // Integer pointer to first element of array

    populate(arr, size);

    printf("\nValue of third element: %d\n", *(parr + 2));

    parr +=2;                   // Increment pointer by 2
    printf("Value after incrementing pointer by 2: %d\n", *parr);

    (*parr)--;                  // Subtract 1 from value
    printf("Value after subtracting 1: %d\n", *parr);

    parr = &arr[0];             // Move pointer back to first element
    printf("Value of first element: %d\n", *parr);
}

void populate(int x[], int s)           // Populate the array
{
    printf("Input %d elements in the array:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("integer - %d: ", i);
        scanf("%d", &x[i]);
    }
}