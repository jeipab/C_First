#include <stdio.h>

void instruct();                    // Function prototype
int choose();
float (*assign(int))(float, float);
float add(float, float);
float subtract(float, float);
float multiply(float, float);
float divide(float, float);

int main()
{
    instruct();                         // Call instruct function
    float (*pFunction)(float, float);   // Function pointer declaration
    int op;                             // Variable (normal declarations
    float num1, num2, result;

    op = choose();                      // Call choose function

    pFunction = assign (op);            // Call assign function

    if (pFunction == NULL)              // Check input
    {
        printf("Invalid input.\n");
        return 1;
    }
    
    printf("Enter first number: ");     // Input for values
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    result = pFunction(num1, num2);     // Call assigned function

    printf("Result: %.2f\n", result);   // Print result
}

void instruct()                                 // Orient user
{
    printf("This program can perform basic mathematical operations.\n");
}

int choose()                                    // Choose operation
{
    int o;
    printf("Operations:\n");
    printf("1 - Addition\n");
    printf("2 - Subtraction\n");
    printf("3 - Multiplication\n");
    printf("4 - Division\n");
    printf("Choose number: ");
    scanf("%d", &o);

    return o;
}

float (*assign(int operation))(float, float)    // Assign operation to function pointer
{
    switch (operation)
    {
        case 1:
            return add;
        case 2:
            return subtract;
        case 3:
            return multiply;
        case 4:
            return divide;
        default:
            return NULL;
    }
}

float add(float a, float b)         // Addition
{
    return a + b;
}

float subtract(float a, float b)    // Subtraction
{
    return a - b;
}

float multiply(float a, float b)    // Multiplication
{
    return a * b;
}

float divide(float a, float b)      // Division
{
    return a / b;
}