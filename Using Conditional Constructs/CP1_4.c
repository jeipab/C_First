#include <stdio.h>

int main()
{
    //Declare variables
    float const CHARGE1 = 2.5;
    float const CHARGE2 = 2.0;
    float const CHARGE3 = 1.5;
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday", "Sunday"};
    int numDay = 0;
    int numHour = 0;
    int numMin = 0;
    
    //Orient user
    printf("Call charge on weekday (6:00 AM to 18:00 PM) per minute: %.2f pesos.\n", CHARGE1);
    printf("Call charge on weekday (18:00 PM to 6:00 AM) per minute: %.2f pesos.\n", CHARGE2);
    printf("Call charge on weekdend per minute: %.2f pesos.\n", CHARGE3);
    
    //Numeric day
    printf("The days of the week are assigned a number:\n");
    for (int i = 1; i < 8; i++)
    {
        printf("%s = %i\n", days[i - 1], i);
    }
    
    //Prompt user input for day and check validity
    while (numDay < 1 || numDay > 7)
    { 
        printf("Input numeric day: ");
        scanf("%d", &numDay);
        if (numDay < 1 || numDay > 7)
        {
            printf("INVALID INPUT\n");
        }
    }

    //Prompt user input for time in 24 hour format and check validity
    while (numHour < 1 || numHour > 24)
    {
        printf("Enter time (in 24-hour format) call started: ");
        scanf("%d", &numHour);
        if (numHour < 1 || numHour > 24)
        {
            printf("INVALID INPUT\n");
        }
    }
    
    //Prompt user input for length of call in minutes (rounded) and check validity
    while (numMin < 1)
    {
        printf("Enter duration of call (rounded to next minute): ");
        scanf("%d", &numMin);
        if (numMin < 1)
        {
            printf("INVALID INPUT\n");
        }
    }
    
    //Calculate bill
    if (numDay < 6)
    {
        if (numHour >= 6 && numHour <= 18) //Weekday, 6:00 AM to 18:00 PM, 2.50
        {
            printf("Bill: %.2f pesos", numMin * CHARGE1);
        }
        else //Weekday, 18:00 PM to 6:00 AM, 2.00
        {
            printf("Bill: %.2f pesos", numMin * CHARGE2);
        }
    }
    else //Weekend, Anytime, 1.50
    {
        printf("Bill: %.2f pesos", numMin * CHARGE3);
    }

    return 0;
}