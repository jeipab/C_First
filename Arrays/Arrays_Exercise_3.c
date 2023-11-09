#include <stdio.h>

int main()
{
    // Orient user
    printf("This program will count the total number of duplicate elements in an array.\n");

    // Initialize variables
    int i, j, n, count = 0;
    
    // Prompt user for number of elements to be stored
    printf("Input the number of elements to be stored in the array: ");
    scanf("%i", &n);

    // Initialize array (arr)
    int arr[n];

    // Prompt user for input and store it to arr array
    printf("Input %i elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %i : ", i);
        scanf("%i", &arr[i]);
    }

    // Check for duplicates
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
    }

    // Print result
    printf("Total number of duplicate elements found in the array is : %i", count);

    return 0;
}