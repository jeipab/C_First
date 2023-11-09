#include <stdio.h>

void instruct();    // Function prototype
void populate(int [], int);

int main()
{
    instruct();     // Call instruct function
    
    int size, i;    // Declare variables

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);

    int arr[size];          // Declare array

    populate(arr, size);    // Call populate function

    // Print output using pointers
    printf("The elements you entered are:\n");
    for (i = 0; i < size; i++)
    {
        printf("element - %d: %d\n", i, *(arr + i));
    }
    
    return 0;
}

void instruct()                 // Orient user
{
    printf("This program will print the elements of an array based on your input.\n");   
}

void populate(int x[], int s)    // Populate the array
{
    printf("Input %d number of elements in the array:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", (x + i));
    }
}