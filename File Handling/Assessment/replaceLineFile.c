#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fP;                                               // File pointer declaration
    FILE *fPTemp;
    char nameFile[30], sentence[500], newLine[100], a;      // Variable declaration/initialization
    int choice, checker = 0, replaceLine, currentLine = 1;
    

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

    do
    {
        printf("\nChoose:\n1 - Display content of file\n2 - Replace a line of file\n3 - Exit");
        printf("\nEnter your choice (1, 2, 3): ");
        scanf("%d", &choice);
        scanf("%c", &a);

        switch(choice)
        {
            case 1:
            {
                printf("\nThe content of the file %s is :\n", nameFile);    

                while (fgets(sentence, sizeof(sentence), fP))       // Display the content of file
                {
                    printf("%s", sentence);
                }
                printf("\n");

                rewind(fP);                                         // Move file pointer back to the beginning

                break;
            }

            case 2:
            {
                printf("\nInput the content of new line : ");
                fgets(newLine, sizeof(newLine), stdin);
                newLine[strcspn(newLine, "\n")] = '\0';             // Remove newline character

                printf("Input the line number you want to replace : ");
                scanf("%d", &replaceLine);

                fPTemp = fopen("temp.txt", "w");                    // Create and open a temp file

                if (fPTemp == NULL)                                 // Check if file exists
                {
                    printf("Failed to open temporary file.\n");
                    return 1;
                }

                while (fgets(sentence, sizeof(sentence), fP))
                {
                    if (replaceLine == currentLine)
                    {
                        fprintf(fPTemp, "%s\n", newLine);               // Write the new line to temp file
                    }
                    else
                    {
                        fprintf(fPTemp, "%s", sentence);                // Copy original lines to temp file
                    }

                    if (sentence[strlen(sentence) - 1] == '\n')         // Check if it is the end of a line, then increment currentLine
                    {
                        currentLine++;
                    }
                }

                fclose(fP);                         // Close the original file
                fclose(fPTemp);                    // Close the temporary file

                remove(nameFile);                   // Remove the original file
                rename("temp.txt", nameFile);       // Rename the temporary file to the original file

                fP = fopen(nameFile, "r");          // Reopen the file for reading

                if (fP == NULL)                     // Check if file exists
                {
                    printf("Failed to open the file.\n");
                    return 1;
                }

                rewind(fP);                                   // Move file pointer back to the beginning
                currentLine = 1;                              // Reset currentLine to 1
                printf("\nReplacement did successfully..!!\n");
                break;

            }
            case 3:
            {
                printf("\nExiting the program...");
                checker = 1;
            }
        }
    } while (checker != 1);

    fclose(fP);                                         // Release the file pointer

    return 0;
}