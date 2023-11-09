#include <stdio.h>

int main()
{
    int start, end, step, next; //Declare variables

    //Orient user
    printf("Enter start and end number, then a step number.\nNumbers will be printed out starting with the start input, the following items will be the sum of its preceding value and step.\nThis will continue as long as the next item is less than the end value.\n");
    
    //Prompt for input
    printf("Enter start: ");
    scanf("%d", &start);

    printf("Enter end: ");
    scanf("%d", &end);

    printf("Enter step: ");
    scanf("%d", &step);

    if (start > end) //Check if start is greater than end
    {
        printf("Start should not be greater than the End.");
        return 1;
    }
    
    if (step < 0) //Check if step is less than 0
    {
        printf("Step should be greater than 0.");
        return 1;
    }

    next = start + step; //Update the next variable
    printf("%d\n", start); //Print start variable
    
    for (int i = next; next < end; next += step) //For loop(initialize, test, get next item)
    {
        printf("%d\n", next);
    }

    return 0;
}