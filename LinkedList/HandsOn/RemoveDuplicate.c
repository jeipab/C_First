#include <stdio.h>
#include <malloc.h>

struct node
{
    int value;          
    struct node *next;      
} *current, *head, *tail;   

int main()
{
    int checker = 0, counter = 0, temp;
    struct node *iterate, *duplicateNode;

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
            printf("\nChoose:\n1. Continue adding\n2. Remove duplicate elements.\nEnter your choice: ");
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

    current = head;
    while (current != NULL) 
    {
        iterate = current;
        while (iterate->next != NULL)
        {
            if (iterate->next->value == current-> value)
            {
                duplicateNode = iterate->next;
                iterate->next = iterate->next->next;
                free(duplicateNode);
            }
            else
            {
                iterate = iterate->next;
            }
        }
        current = current -> next;
    }           

    current = head;
    printf("\nData entered in the list without duplicates:\n");
    while (current != NULL)                     
    {
        printf("Data = %d\n", current->value);
        current = current->next;
    }

    return 0;
}