#include <stdio.h>

int main()
{
    //Declare variables
    float salary = 0;
    int year = -1;
    float bonus1, bonus2, bonus3, bonus4, bonus5;
    
    //Orient user
    printf("The following bonus will apply on your salary based on your years of service:\n");
    printf("0 - 5 years      --> 20%% of salary\n6 - 10 years     --> 25%% of salary\n");
    printf("11 - 15 years    --> 30%% of salary\n16 - 20 years    --> 35%% of salary\n21 years or more --> 50%% of salary\n");
    
    //Prompt user input for salary and check validity
    while (salary <= 0)
    {
        printf("Enter salary: ");
        scanf("%f", &salary);
        if (salary <= 0)
        {
            printf("INVALID INPUT\n");
        }
    }
    
    //Prompt user input for number of years of service
    while (year < 0)
    { 
        printf("Enter number of years of service: ");
        scanf("%d", &year);
        if (year < 0)
        {
            printf("INVALID INPUT\n");
        }
    }

    //Update variables
    bonus1 = salary * .20;
    bonus2 = salary * .25;
    bonus3 = salary * .30;
    bonus4 = salary * .35;
    bonus5 = salary * .50;

    //Calculate and display bonus
    switch(year)
    {
        case 0 ... 5:
            printf("Bonus: %.2f", bonus1);
            break;

        case 6 ... 10:
            printf("Bonus: %.2f", bonus2);
            break;
        
        case 11 ... 15:
            printf("Bonus: %.2f", bonus3);
            break;

        case 16 ... 20:
            printf("Bonus: %.2f", bonus4);
            break;

        default: //>20
            printf("Bonus: %.2f", bonus5);
            break;
    }

    return 0;
}