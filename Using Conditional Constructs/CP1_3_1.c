#include <stdio.h>

int main()
{
    //Declare variables
    int num;
    char days[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday","Friday", "Saturday", "Sunday"};

    //Orient user
    printf("Determine what day corresponds to the numeric value.\n");
    printf("The days of the week are assigned a number:\n");
    for (int i = 1; i < 8; i++)
    {
        printf("%s = %i\n", days[i - 1], i);
    }
    
    //Prompt user input
    printf("Input numeric day: ");
    scanf("%d", &num);
    
    //Check validity
    if(num < 1 || num > 7)
    {
        printf("INVALID INPUT\n");
        return 1;
    }
    else if (num < 6)
    {
        //Print out day of the week in words
        printf("That day is a %s\n", days[num - 1]);
        printf("Have a nice day!\n");
    }
    else
    {
        //Print out day of the week in words
        printf("That day is a %s\n", days[num - 1]);
        printf("Have a nice rest!\n");
    }

    return 0;
}