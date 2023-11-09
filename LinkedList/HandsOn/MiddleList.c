#include <stdio.h>
#include <malloc.h>

struct node
{
    int value;          
    struct node *next;      
} *current, *head, *tail;   

int main()
{
    int i, checker = 0, counter = 0, remainder, tracker, temp;

    head = NULL;                            
    tail = NULL;

    do
    {
        current = (struct node*)malloc(sizeof(struct node));    
        printf("\nInput data for node %d : ", counter + 1);
        scanf("%d", &current->value);
        current->next = NULL;
        counter++;                                   

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

        do
        {
            printf("\nChoose:\n1. Continue adding\n2. Find the middle element.\nEnter your choice: ");
            scanf("%d", &checker);
            if (checker < 1 || checker > 2)
            {
                printf("Invalid input. Try again.\n");
            }
        } while (checker < 1 || checker > 2);
        
    } while (checker != 2);

    temp = 0;
    current = head;
    printf("\nData entered in the list:\n");
    while (current != NULL)                     
    {
        printf("Data %d = %d\n", temp + 1, current->value);
        current = current->next;
        temp++;
    }

    remainder = counter % 2;
    tracker = counter / 2 + 1;
    current = head;
    for (i = 0; i < tracker - 1; i++)
    {
        current = current->next;
    }

    printf("Middle element at Node %d: %d", tracker, current->value);

    return 0;
}