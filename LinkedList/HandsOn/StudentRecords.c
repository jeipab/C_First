#include <stdio.h>
#include <malloc.h>
#include <string.h>

struct record
{
    char studentName[30];
    int score;          
    struct record *next;      
} *current, *head, *tail;   

int main()
{
    char a, studentNameHighestScorer[30];
    int checker = 0, counter = 0, highestScore = 0;

    head = NULL;                            
    tail = NULL;

    do
    {
        current = (struct record*)malloc(sizeof(struct record));    
        
        printf("\nEnter the name of student %i: ", counter + 1);
        gets(current->studentName);
        printf("Enter their score: ");
        scanf("%d", &current->score);
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

        do
        {
            printf("\nChoose:\n1. Continue adding\n2. Find highest score.\nEnter your choice: ");
            scanf("%d", &checker);
            scanf("%c", &a);
            if (checker < 1 || checker > 2)
            {
                printf("Invalid input. Try again.\n");
            }
        } while (checker < 1 || checker > 2);
        
    } while (checker != 2);           

    current = head;  
    counter = 0;                           
    printf("\nData entered in the list:\n");
    while (current != NULL)                     
    {
        printf("\nStudent %d: ", counter + 1);
        puts(current->studentName);
        printf("Score: %d\n", current->score);

        current = current->next;
        counter++;
    }

    current = head;
    counter = 0;
    while (current != NULL) 
    {
        if (current->score > highestScore) 
        {
            highestScore = current->score;
            strcpy(studentNameHighestScorer, current->studentName);
        }
        current = current->next;
        counter++;
    }
    
    printf("\nStudent %d: ", counter - 1);
    puts(studentNameHighestScorer);
    printf("Highest Score: %d\n", highestScore);

    return 0;
}