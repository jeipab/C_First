#include <stdio.h>

int main()
{
    //Declare variables
    int num1, num2;

    //Orient user
    printf("Determine which number is smaller.\n");

    //Prompt user input
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    //Determine relation between num1 and num2
    if (num1 < num2)
    {
        printf("NUMBER1 IS SMALLER\n");
    }

    if (num1 > num2)
    {
        printf("NUMBER2 IS SMALLER\n");
    }
    if (num1 == num2)
    {
        printf("NUMBER1 AND NUMBER2 ARE EQUAL\n");
    }

    return 0;
}