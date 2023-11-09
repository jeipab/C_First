#include <stdio.h>

void instruct();                    // Function prototype
void populate(int [], int);
void sort(int [], int);
void swap(int *, int *);
void output(int [], int);

int main()
{
    instruct();     // Call instruct function

    int size;       // Declare variable

    printf("Input the number of elements to store in the array: ");
    scanf("%d", &size);

    int arr[size];  // Declare array

    populate(arr, size);    // Call populate function

    sort(arr, size);        // Call sort function

    output(arr, size);      // Call output function

    return 0;

}

void instruct()                     // Orient user
{
    printf("This program will sort the array in ascending order.\n");   
}

void populate(int x[], int s)       // Populate the array
{
    printf("Input %d number of elements in the array:\n", s);
    for (int i = 0; i < s; i++)
    {
        printf("element - %d: ", i);
        scanf("%d", (x + i));
    }
}

void sort(int x[], int s)           // Sort the array
{
    if (s == 1)                     // Base case
    {
        return;
    }
    
    for (int i = 0; i < s - 1; i++)
    {
        if(x[i] > x[i + 1])
        {
            swap(&x[i], &x[i+1]);   // Call swap function
        }
    }

    sort(x, s - 1);                 // Recursive case
}

void swap(int *a, int *b)           // Swap Values
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void output(int x[], int s)         // Print output
{
    printf("The elements in the array after sorting:\n");
    for (int i = 0; i < s; i++)
    {
        printf("element - %d: %d\n", i, *(x + i));
    }
}