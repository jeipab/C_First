#include <stdio.h>

int main()
{
    //Declare variables
    float addend, sum = 0;

    //Orient user
    printf("Enter all addends to get them sum.\nEnd input process by entering 0.\n");

    for (addend = 1; addend != 0; sum += addend) //For loop (Initialize, condition, update sum variable)
    {
        printf("Enter a number: "); //Prompt for input
        scanf("%f", &addend);
    }
    printf ("Sum = %.2f", sum); //Print sum

    return 0;
}