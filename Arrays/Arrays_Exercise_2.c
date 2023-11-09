#include <stdio.h>

int main()
{
    // Orient user
    printf("This program will copy the elements of one array into another array.\n");

    // Prompt user for number of elements to be stored
    int i, n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%i", &n);

    // Initialize array (orig, copy)
    int orig[n], copy[n];

    // Prompt user for input and store it to orig array
    printf("Input %i elements in the array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %i : ", i);
        scanf("%i", &orig[i]);
    }

    // Copy elements of orig array to copy array
    for (i = 0; i < n; i++)
    {
        copy[i] = orig[i];
    }

    // Print result
    printf("The elements stored in the first array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%i ", orig[i]);
    }

    printf("\n");

    printf("The elements copied into the second array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("%i ", copy[i]);
    }

    return 0;
}