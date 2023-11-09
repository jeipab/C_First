#include <stdio.h>

int main()
{
    //Declare variables
    float addend, sum = 0;

    //Orient user
    printf("Enter all addends to get them sum.\nEnd input process by entering 0.\n");

    do //Do...while loop
    {
        printf("Enter a number: "); //Prompt for input
        scanf("%f", &addend);
        sum += addend; //Update sum variable
    } while (addend != 0);

    printf ("Sum = %.2f", sum); //Print sum

    return 0;
}