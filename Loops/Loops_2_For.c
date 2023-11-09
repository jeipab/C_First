#include <stdio.h>

int main()
{
    //Orient
    printf("Print all odd numbers from 1 to 100.\n");
    
    //Declare variable
    int start, end = 100;

    for (start = 1; start < end; start += 2) //For loop (Initialize, condition, get next odd number)
    {
        printf("%d\n", start);
    }

    return 0;
}