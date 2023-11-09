#include <stdio.h>

int main()
{
    //Declare variables
    int num;
    float const CHARGE = 0.5;
    
    //Orient user
    printf("Determine text messaging charge.\n");
    printf("Charge for first 200 messages is 0 pesos.\n");
    printf("Charge for text messages beyond that is %.2f pesos each.\n", CHARGE);
    
    //Prompt user input
    printf("Input number of text messages: ");
    scanf("%d", &num);
    
    //Check validity
    if (num < 0)
    {
        printf("Invalid input\n");
        return 1;
    }
    else if (num <= 200)
    {
        //Print out total charge
        printf("Charge incurred: 0 pesos\n");
    }
    else
    {
        //Calculate cost
        float fee = (num - 200) * CHARGE;
        printf("Charge incurred: %.2f pesos", fee);
    }
    
    return 0;
}