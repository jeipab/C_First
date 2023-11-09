#include <stdio.h>
#include <string.h>

int main()
{
    char string[50], specificChar;
    int length, i, count = 0;

    printf("Enter a string: ");
    gets(string);

    printf("Enter a specific character to count: ");
    scanf(" %c", &specificChar);

    length = strlen(string);

    for (i = 0; i < length; i++)    // Count number of commas that appeared in the string
    {
        if (string[i] == specificChar)
        {
            count++;
        }
    }

    printf("Number of %c that appeared in the input: %d.", specificChar, count);
}
