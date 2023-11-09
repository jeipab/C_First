#include <stdio.h>

int main()
{
    // Orient user
    printf("This program will merge two arrays of the same size that will be sorted in descending order.\n");

    // Initialize variables
    int i, n1, n2, c, tmp, j;
    
    // Prompt user for number of elements to be stored in arr1 array
    printf("Input the number of elements to be stored in the first array : ");
    scanf("%i", &n1);

    // Initialize arr1 array
    int arr1[n1];

    // Prompt user for input and store into arr1 array
    printf("Input %i elements in the array :\n", n1);
    for (i = 0; i < n1; i++)
    {
        printf("element - %i : ", i);
        scanf("%i", &arr1[i]);
    }

    // Prompt user for number of elements to be stored in arr2 array
    printf("Input the number of elements to be stored in the second array : ");
    scanf("%i", &n2);

    // Initialize arr2 array
    int arr2[n2];

    // Prompt user for input and store it to arr2 array
    printf("Input %i elements in the array :\n", n2);
    for (i = 0; i < n2; i++)
    {
        printf("element - %i : ", i);
        scanf("%i", &arr2[i]);
    }

    // Set size for combined array
    c = n1 + n2;

    //  Set array for combination
    int comb[c];

    // Combine arr1 and arr2
    for (i = 0; i < n1; i++) // Add arr1 to comb array
    {
        comb[i] = arr1[i];
    }

    for (i = 0; i < n2; i++) // Add arr2 to comb array
    {
        comb[n1] = arr2[i];
        n1++;
    }

    // Sort in descending order
    for (i = 0; i < c; i++)
    {
        for(j = i + 1; j < c; j++)
        {
            if(comb[i] < comb[j])
            {
                tmp = comb[i];
                comb[i] = comb[j];
                comb[j] = tmp;
            }
        }
    }

    // Print out array in descending order
    printf("The merged array in descending order is :\n");
    for (i = 0; i < c; i++)
    {
        printf("%i ", comb[i]);
    }

    return 0;
}