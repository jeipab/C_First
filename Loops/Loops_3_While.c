#include <stdio.h>

int main()
{
    //Orient
    printf("Generate numbers from 100 down to 0.\n");
    
    //Declare and initialize variable
    int start = 100;

    while (start >= 0) //While loop
    {
        printf("%d\n", start);
        start--; //Decrement
    }

    return 0;
}