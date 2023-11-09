#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fP;                                           // File pointer declaration
    char nameFile[30], sentence[200];                   // Variable declaration

    // Create a file
    printf("Enter name of text file: ");                // Input for file name
    fgets(nameFile, sizeof(nameFile), stdin);
    nameFile[strcspn(nameFile, "\n")] = '\0';           // Remove newline character

    strcat(nameFile, ".txt");                           // Add file extension

    fP = fopen(nameFile, "w");                          // Create a new file

    if (fP == NULL)                                     // Check if file exists
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("Input sentences for the file (Enter 'exit' to quit):\n ");      // Input sentences to be added to the file
    while(1)
    {
        fgets(sentence, sizeof(sentence), stdin);

        if (strcmp(sentence, "exit\n") == 0)
        {
            break;
        }

        fprintf(fP, "%s", sentence);                // Write sentence into the txt file
    }

    fclose(fP);                                     // Release the file pointer

    // Read from the file
    fP = fopen(nameFile, "r");                      // Reopen created file for reading

    printf("The content of the file %s is :\n", nameFile);

    while (fgets(sentence, sizeof(sentence), fP))
    {
        printf("%s", sentence);
    }

    fclose(fP);                                     // Release the file pointer

    return 0;
}