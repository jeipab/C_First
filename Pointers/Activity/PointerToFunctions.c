#include <stdio.h>

void instruct();                // Function prototype      
void populate(int [], int);
void multiplyByTwo(int *);
void printModified(int *);

void main()
{
    instruct();                 // Call instruct function
    
    int size = 5;               // Declare array for storing
    int arr[size];
    int *parr = &arr[0];        // Integer pointer

    populate(arr, size);
    
    multiplyByTwo(parr);        // Call multiplyByTwo function
    
    printModified(parr);        // Call printModified function
}

void instruct()                     // Orient user
{
    printf("This program will multiply the elements of an array by two.\n");
}

void populate(int x[], int s)       // Populate the array
{
    printf("Input %d elements in the array:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("integer - %d: ", i);
        scanf("%d", &x[i]);
    }
}

void multiplyByTwo(int *pArr)       // Multiply each element of array by 2
{
    for (int i = 0; i < 5; i++)
    {
        *(pArr + i) = *(pArr + i) * 2;
    }
}

void printModified(int *pArr)       // Print elements in modified array 
{
    printf("\nModified array:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("element %d: %d\n", i, *(pArr + i));
    }
}