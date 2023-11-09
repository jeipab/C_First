#include <stdio.h>

void instruct();
int add(int, int);
int multiply(int, int);

int main() {
    int num1, num2, sum, product;           // Declare variables
    
    instruct();     // Call instruct function

    printf("Enter the first integer: ");    // User input
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    sum = add(num1, num2);          // Call add function
    product = multiply(num1, num2); // Call multiply function

    printf("The sum of %d and %d is %d.\n", num1, num2, sum);           // Print result
    printf("The product of %d and %d is %d.", num1, num2, product);

    return 0;
}

void instruct(){            // Orient user
    printf("Enter two integer inputs to get their sum and product.\n");
    return;
}

int add(int x, int y){      // Get the sum
    return x + y;
}

int multiply(int x, int y){ // Get the product
    return x * y;
}