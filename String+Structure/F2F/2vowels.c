#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char string[50], lowered[50];
    int length, i, vowelCount = 0;

    printf("Enter a string: ");
    gets(string);

    length = strlen(string);

    for (i = 0; i < length; i++)            // Make casing uniform
    {
        lowered[i] = tolower(string[i]);
    }

    for (i = 0; i < length; i++)            // Count number of vowels
    {
        if (lowered[i] == 'a' || lowered[i] == 'e' || lowered[i] == 'i' || lowered[i] == 'o' || lowered[i] == 'u')
        {
            vowelCount++;
        }
    }

    printf("Number of vowels in %s is %d.", string, vowelCount);
}
