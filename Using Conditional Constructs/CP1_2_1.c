#include <stdio.h>

int main()
{
    //Declare variables
    int num;
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday", "Sunday"};

    //Orient user
    printf("Determine if the day is a weekday or weekend.\n");
    printf("The days of the week are assigned a number:\n");
    for (int i = 1; i < 8; i++)
    {
        printf("%s = %i\n", days[i - 1], i);
    }
    
    //Prompt user input
    printf("Enter numeric day: ");
    scanf("%d", &num);
    
    //Check validity
    if(num < 1 || num > 7)
    {
        printf("Invalid input\n");
        return 1;
    }

    //Determine if it is a weekday or weekend
    if (num < 6)
    {
        printf("WEEKDAY");
    }
    else
    {
        printf("WEEKEND");
    }
    return 0;
}