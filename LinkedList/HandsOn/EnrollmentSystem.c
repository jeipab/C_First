#include <stdio.h>
#include <malloc.h>

struct record
{
    int rollNumber, age;
    char studentName[30];
    float gpa;
              
    struct record *next;      
} *current, *head, *tail;   

int main()
{
    char a;
    int choice, checker = 0, counter = 0, findStudent, found;

    head = NULL;
    tail = NULL;

    printf("\nStudent Enrollment System\n");

    do
    {
        do
        {
            printf("\nPlease choose:\n");
            printf("1. Add a new student\n");
            printf("2. Display enrolled students\n");
            printf("3. Search for a student by roll number\n");
            printf("4. Exit\n");
            printf("\nEnter your choice: ");
            scanf("%d", &choice);
            if (choice < 1 || choice > 4)
            {
                printf("Invalid input. Try again.\n");
            }
        } while (choice < 1 || choice > 4);

        switch(choice)
        {
            case 1:
            {
                current = (struct record*)malloc(sizeof(struct record));
                printf("Enter Roll Number: ");
                scanf("%d", &current->rollNumber);
                scanf("%c", &a);
                printf("Enter Name: ");
                gets(current->studentName);
                printf("Enter Age: ");
                scanf("%d", &current->age);
                printf("Enter GPA: ");
                scanf("%f", &current->gpa);
                current->next = NULL;                            

                if (head == NULL)                                  
                {
                    head = current;
                    tail = current;
                }
                else                                
                {
                    tail->next = current;
                    tail = current;
                }

                counter++;

                printf("\nStudent added successfully!\n");

                break;
            }
            case 2:
            {
                current = head;                            
                printf("Enrolled Students:\n");
                while (current != NULL)                     
                {
                    printf("Roll Number: %d | ", current->rollNumber);
                    printf("Name: ");
                    puts(current->studentName);
                    printf(" | Age: %d | GPA: %.1f\n", current->age, current->gpa);
                    current = current->next;
                }

                break;
            }

            case 3:
            {
                current = head;
                printf("Enter Roll Number to search: ");
                scanf("%d", &findStudent);
                while (current != NULL)
                {
                    if (findStudent == current->rollNumber)
                    {
                        found = 0;
                        printf("\nStudent Found:\n");
                        printf("Roll Number: %d | ", current->rollNumber);
                        printf("Name: ");
                        puts(current->studentName);
                        printf(" | Age: %d | GPA: %.1f\n", current->age, current->gpa);
                    }
                    else
                    {
                        found = 1;
                    }
                    current = current->next;
                }
                if (found == 1)
                {
                    printf("\nStudent not found.\n");
                }

                break;
            }
            
            case 4:
            {
                printf("\nThank you for using the Student Enrollment System!\n");
                checker = 1;
                
                break;
            }
        }
    } while (checker != 1);
    
    return 0;
}