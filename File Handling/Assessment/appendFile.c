#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fP;                                           // File pointer declaration
    char nameFile[30], sentence[500], addLine[100];     // Variable declaration/initialization
    int newLines, i;
    int characterCount = 0, wordCount = 0;
    char a;

    // Input name of file
    printf("Input the file name to be opened (exclude file extension) : ");
    fgets(nameFile, sizeof(nameFile), stdin);
    nameFile[strcspn(nameFile, "\n")] = '\0';           // Remove newline character

    strcat(nameFile, ".txt");                           // Add file extension

    // Append to a file
    fP = fopen(nameFile, "a");

    if (fP == NULL)                                         // Check if file exists or can be opened
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("Input the number of lines to be written : ");
    scanf("%d", &newLines);
    scanf("%c", &a);                                        // Clear the newline character from the input buffer
    printf("The lines are :\n");
    for (i = 0; i < newLines; i++)
    {
        fgets(addLine, sizeof(addLine), stdin);
        addLine[strcspn(addLine, "\n")] = '\0';             // Remove newline character
        fprintf(fP, "\n%s", addLine);                       // Write the line to the file
    }

    fclose(fP);             // Release the file pointer

    // Read from a file
    fP = fopen(nameFile, "r");

    if (fP == NULL)         // Check if file exists or can be opened
    {
        printf("Failed to open the file.\n");
        return 1;
    }

    printf("\nThis is the content of the file %s:\n", nameFile);

    while (fgets(sentence, sizeof(sentence), fP))           // Display the content of file
    {
        printf("%s", sentence);
    }

    fclose(fP);

    return 0;
}