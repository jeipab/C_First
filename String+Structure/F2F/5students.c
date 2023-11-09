#include <stdio.h>
#include <string.h>

struct record
{
    int id, age, subjectGrades[5];
    char fullName[50], gradeLevel[10];
};

int menu();

int main()
{
    char a;
    int size, choice, i, j, currentSize = 0, checker, subjectCounter;
    do
    {
        printf("Enter the number of students: ");
        scanf("%d", &size);

        if (size < 1)
        {
            printf("Number of students should be greater than 0.\n");
        }
    } while (size < 1);

    struct record student[size];

    do
    {
        choice = menu();                                // Call menu function
        switch(choice)
        {
            case 1:                                     // Add to inventory
                if (currentSize >= size)                // Check if inventory is full
                {
                    printf("\nSystem is full.\n");
                    break;
                }
            
                for (i = currentSize; i < currentSize + 1; i++)     // Input new product
                {
                    printf("\nEnter student ID: ");
                    scanf("%d", &student[i].id);
                    scanf("%c", &a);
                    printf("Enter student name: ");
                    gets(student[i].fullName);
                    printf("Enter student age: ");
                    scanf("%d", &student[i].age);
                    printf("Enter student grade: ");
                    scanf("%s", student[i].gradeLevel);

                    printf("\nEnter marks for 5 subjects:\n");
                    for (j = 0; j < 5; j++)
                    {
                        printf("Subject %d: ", subjectCounter + 1);
                        scanf("%d", &student[i].subjectGrades[j]);
                        subjectCounter++;
                    }
                    subjectCounter = 0;

                    printf("\nStudent added successfully!\n");
                }

                currentSize++;                      // Increase counter
                break;

            case 2:                                 // Update product quantity
                if (currentSize == 0)               // Check if inventory is empty
                {
                    printf("\nSystem is empty.\n");
                    break;
                }
                int searchID = 0;
                printf("\nEnter student ID to search: ");    // Search for a student
                scanf("%d", &searchID);

                for (i = 0; i < currentSize; i++)
                {
                    if (searchID == student[i].id)
                    {
                        printf("\nStudent Details: \n");
                        printf("ID: %d\n", student[i].id);
                        printf("Name: ");
                        puts(student[i].fullName);
                        printf("Age: %d\n", student[i].age);
                        printf("Grade: %s\n", student[i].gradeLevel);
                        printf("Marks: ");
                        for (j = 0; j < 5; j++)
                        {
                            printf("%d ", student[i].subjectGrades[j]);
                        }
                    }
                    printf("\n");
                }
                break;

            case 3:                                 // Display all students
                if (currentSize == 0)               // Check if inventory is empty
                {
                    printf("System is empty.\n");
                    break;
                }

                printf("\nStudent details:\n");

                for (i = 0; i < currentSize; i++)
                {
                    printf("ID: %d\n", student[i].id);
                    printf("Name: ");
                    puts(student[i].fullName);
                    printf("Age: %d\n", student[i].age);
                    printf("Grade: %s\n", student[i].gradeLevel);
                    printf("Marks: ");
                    for (j = 0; j < 5; j++)
                    {
                        printf("%d\n ", student[i].subjectGrades[j]);
                    }
                    printf("\n");
                }
                
                break;

            case 4:                                     // Exit program
                checker = 1;

                printf("Exiting the program...\n");
                break;
        }
        
    } while (checker != 1);

}

int menu()                                          // Display options and choose
{
    int x;

    printf("\nMenu: \n");
    printf("\t1. Add a student\n");
    printf("\t2. Search for a student\n");
    printf("\t3. Display all students\n");
    printf("\t4. Exit\n");

    do
    {
        printf("\nEnter your choice: ");            // Input choice
        scanf("%d", &x);
        
        if(x < 1 || x > 5)                          
        {
            printf("Invalid input.");
        }
    } while (x < 1 || x > 5);                       // Check if input is valid

    return x;
}