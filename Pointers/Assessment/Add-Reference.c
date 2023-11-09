#include <stdio.h>

void instruct();    // Function prototype
void add(int *, int *, int *);

int main()
{
    instruct();             // Call instruct function
    
    int num1, num2, sum;    // Declare variables

    // User input
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);

    add(&num1, &num2, &sum);    // Call add function by reference

    printf("The sum of %d and %d is %d", num1, num2, sum);  // Print output

    return 0;
}

void instruct()     // Orient user
{
    printf("Input two numbers to calculate their sum.\n");   
}

void add(int *a, int *b, int *s)    // Add numbers using call by reference
{
    *s = *a + *b;
}