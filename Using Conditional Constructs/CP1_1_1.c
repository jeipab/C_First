#include <stdio.h>

int main()
{
    //Declare variable
    double num;

    //Orient user
    printf("Determine if number is positive, negative, or 0.\n");

    //Prompt user input
    printf("Enter number: ");
    scanf("%lf", &num);
    
    //Determine if input is positive, negative, or neither
    if (num > 0)
    {
        printf("POSITIVE\n");
    }

    if (num < 0)
    {
        printf("NEGATIVE\n");
    }
    if (num == 0)
    {
        printf("NEITHER\n");
    }

    return 0;
}