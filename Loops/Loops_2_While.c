#include <stdio.h>

int main()
{
    //Orient
    printf("Print all odd numbers from 1 to 100.\n");
    
    //Declare and initialize variable
    int start = 1;
    int end = 100;

    while (start < end) //While loop
    {
        printf("%d\n", start);
        start += 2; //Get next odd number
    }

    return 0;
}