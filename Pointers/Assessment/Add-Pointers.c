#include <stdio.h>

void instruct();    // Function prototype

int main()
{
    instruct();     // Call instruct function
    
    int num1, num2, num3, sum, *p1, *p2, *p3;      // Declare variables (normal and pointer)

    // Pointer initialization
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;

    // User input
    printf("Input the first number: ");
    scanf("%d", &num1);
    printf("Input the second number: ");
    scanf("%d", &num2);
    printf("Input the third number: ");
    scanf("%d", &num3);

    sum = *p1 + *p2 + *p3;  // Add using pointers

    printf("The sum of the entered numbers is: %d", sum);    // Print output

    return 0;
}

void instruct()     // Orient user
{
    printf("Input three numbers to calculate their sum.\n");   
}