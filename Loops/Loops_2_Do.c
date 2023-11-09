#include <stdio.h>

int main()
{
    //Orient
    printf("Print all odd numbers from 1 to 100.\n");

    //Declare and initialize variable
    int start = 1;
    int end = 100;

    do // Do...while loop
    {
        printf("%d\n", start);
        start += 2; //Get next odd number
    } while (start < end);

    return 0;
}