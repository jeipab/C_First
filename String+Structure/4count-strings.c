#include <stdio.h>
#include <string.h>

int main()
{
    char string[50];
    int length, i, countAlpha = 0, countNumber = 0, countSpecial = 0;

    printf("Input the string: ");       // User input
    gets(string);

    length = strlen(string);            // Get length of string

    for (i = 0; i < length; i ++)       // Increment specific variable based on type of character
    {
        if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
        {
            countAlpha++;
        }
        else if (string[i] >= '0' && string[i] <= '9')
        {
            countNumber++;
        }
        else
            countSpecial++;
    }
    
    printf("\nNumber of Alphabets in the string is: %d\n", countAlpha);     // Display result
    printf("Number of Digits in the string is: %d\n", countNumber);
    printf("Number of Special characters in the string is: %d", countSpecial);

    return 0;
}