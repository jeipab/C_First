#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fP;                                   // File pointer declaration
    char nameFile[30], sentence[100];           // Variable declaration

    printf("Enter name of text file (exclude file extension): ");        // Input for file name
    fgets(nameFile, sizeof(nameFile), stdin);
    nameFile[strcspn(nameFile, "\n")] = '\0';   // Remove newline character

    strcat(nameFile, ".txt");                   // Add file extension

    fP = fopen(nameFile, "w");                  // Create a new file

    if (fP == NULL)                             // Check if file exists
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("Input a sentence for the file : ");     // Input sentence to be added to the file
    fgets(sentence, sizeof(sentence), stdin);
    nameFile[strcspn(nameFile, "\n")] = '\0';       // Remove newline character

    fprintf(fP, "%s", sentence);                    // Write sentence into the txt file

    fclose(fP);                                     // Release the file pointer

    printf("The file %s created successfully...!!", nameFile);      // Prompt for successful file creation
    
    return 0;
}