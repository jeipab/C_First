#include <stdio.h>

void instruct();                    // Function prototype
void printBefore(int *, int *);     
void swapPointers(int *, int *);
void printAfter(int *, int *);

void main()
{
    instruct();                     // Call instruct function
    
    int a, b;                       // Declare variables
    int *ptrA = &a, *ptrB = &b;     // Integer pointers

    printf("Enter first number: "); // User input
    scanf("%d", *(&ptrA));
    printf("Enter second number: ");
    scanf("%d", *(&ptrB));

    printBefore(ptrA, ptrB);        // Call printBefore

    swapPointers(ptrA, ptrB);       // Call swapPointers

    printAfter(ptrA, ptrB);         // Call printAfter
}

void instruct()                             // Orient user
{
    printf("This program will swap two values.\n");
}

void printBefore(int *num1, int *num2)      // Print values before swap
{
    printf("Before swap:\n");
    printf("A - %d\nB - %d", *num1, *num2);
}

void swapPointers(int *num1, int *num2)     // Swap the values
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void printAfter(int *num1, int *num2)       // Print values after swap
{
    printf("\nAfter swap:");
    printf("\nA - %d\nB- %d", *num1, *num2);
}