#include <stdio.h>
#include <string.h>

int main()
{
    char string[50], reversed[50];
    int length, i, count, match;

    printf("Enter a string: ");
    gets(string);

    length = strlen(string);
    count = length;
    
    printf("\nLength is: %d\n", length);

    while (count > 1)
    {
        for (i = 0; i < length; i++)
        {
            reversed[i] = string[count - 1];    // Get the reverse of input
            count--;
        }
    }
    
    printf("Your input: %s\n", string);         // Display input and its reversed form
    printf("Reversed input: ");
    for (i = 0; i < length; i++)
    {
        printf("%c", reversed[i]);
    }
    
    for (i = 0; i < length; i++)                // Determine if Palindrome
    {
        if (string[i] == reversed[i])
        {
            match = 0;
        }
        else{
            match = 1;
        }
    }

    if (match == 0)
    {
        printf("\nPalindrome");
    }
    else
    {
        printf("\nNot a palindrome");
    }
}
