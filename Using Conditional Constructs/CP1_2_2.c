#include <stdio.h>
#include <ctype.h>

int main()
{
    //Declare variables
    char letter;

    //Orient user
    printf("Determine if letter is in upper case or lower case.\n");

    //Prompt user input
    printf("Enter letter: ");
    scanf("%c", &letter);
    
    //Check if input is a letter
    if (isalpha(letter))
    {
        //Determine if letter is in upper case or lower case
        if (islower(letter))
        {
            printf("LOWER CASE\n");
        }
        else
        {
            printf("UPPER CASE\n");
        }
    }
    else
    {
        printf("Invalid character.\n");
    }

    return 0;
}