#include <stdio.h>

int main()
{    
    //Orient
    printf("Generate numbers from 100 down to 0.\n");
    
    //Declare variable
    int start;

    for (start = 100; start >= 0; start--) //For loop (Initialize, condition, decrement)
    {
        printf("%d\n", start);
    }

    return 0;
}