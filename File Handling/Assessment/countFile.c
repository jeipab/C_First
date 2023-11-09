#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fP;                                           // File pointer declaration
    char nameFile[30], sentence[500];                   // Variable declaration
    int i;
    int characterCount = 0, wordCount = 0;              // Variable declaration and initialization

    // Input name of file
    printf("Input the file name to be opened (exclude file extension) : ");
    fgets(nameFile, sizeof(nameFile), stdin);
    nameFile[strcspn(nameFile, "\n")] = '\0';           // Remove newline character

    strcat(nameFile, ".txt");                           // Add file extension

    // Read from a file
    fP = fopen(nameFile, "r");

    if (fP == NULL)                                     // Check if file exists
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("The content of the file %s is :\n", nameFile);    

    while (fgets(sentence, sizeof(sentence), fP))       // Display the content of file
    {
        printf("%s", sentence);

        for (i = 0; i < strlen(sentence); i++)
        {   
            if (sentence[i] == ' ' || sentence[i] == '\n')
            {
                wordCount++;
            }
            else
            {
                characterCount++;
            }
        }
    }

    if (characterCount > 0)                             // Increment wordCount for the last word if there are characters
    {
        wordCount++;
    }
    
    printf("\nThe number of words in the file %s are: %d", nameFile, wordCount);
    printf("\nThe number of characters in the file %s are: %d", nameFile, characterCount);

    fclose(fP);                                         // Release the file pointer

    return 0;
}