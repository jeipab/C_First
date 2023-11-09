#include <stdio.h>

int main()
{
    // Orient user
    printf("This program will get 11 numbers and get the sum of two succeeding pairs.\n");

    // Initialize array (numbers,sum)
    int numbers[11];
    int sums[10];

    // Prompt user for 11 numbers
    printf("Enter 11 numbers: ");

    // Store input to numbers array
    for (int i = 0; i < 11; i++)
    {
        scanf("%i", &numbers[i]);
    }

    // Get sum of two succeeding pairs and store to sums array
    for (int i = 0; i < 11; i++)
    {
        int num1 = numbers[i];
        int num2 = numbers[i+1];
        int add = num1 + num2;
        sums[i] = add;
    }

    //Print result
    printf("SUM of TWO succeeding pairs: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", sums[i]);
    }

    return 0;
}