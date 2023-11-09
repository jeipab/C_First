#include <stdio.h>
#include <string.h>

int main()
{
    char string[50], temp;
    int length, i;

    printf("Input the string: ");       // User input
    gets(string);

    length = strlen(string);            // Get length of string

    while (length != 1)                 // Loop until all characters are sorted
    {
        for (i = 0; i < length - 1; i++)
        {
            if (string[i] >= string[i + 1])
            {
                temp = string[i];
                string[i] = string[i + 1];
                string[i + 1] = temp;
            }
        }
        length--;                       // Track sorting progress
    }
    
    printf("\nAfter sorting the string appears like:\n%s", string);     // Display result

    return 0;
}