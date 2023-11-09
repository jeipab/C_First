#include <stdio.h>
#include <malloc.h>

struct node
{
    int value;              // Value stored in the node
    struct node *next;      // Pointer to the next node in the linked list
} *current, *head, *tail;   // Structure pointers

int menu()                                              // Input choice
{
    int x;

    printf("\nMenu:\n");
    printf("1. Add a new node at the end.\n");
    printf("2. Add a new node at the start.\n");
    printf("3. Add a new node at a certain position.\n");
    printf("4. Delete the node at the beginning.\n");
    printf("5. Delete a node at a certain position.\n");
    printf("6. Delete the node at the end.\n");
    printf("7. Display list.\n");
    printf("8. Exit program.\n");
    do
    {
        printf("\nEnter your choice: ");            
        scanf("%d", &x);
    
        if(x < 1 || x > 8)                          
        {
            printf("Invalid input.");
        }
    } while (x < 1 || x > 8);
    return x;
}

void display(struct node *head, struct node *current)   // Display and iterate through the nodes
{
    current = head;
    printf("\nData entered in the list:\n");
    while (current != NULL)                     
    {
        printf("Data = %d\n", current->value);
        current = current->next;
    }
}

int main()
{
    int numNodes, choice, counter = 0, checker = 0, position, storePosition, lastPosition;

    head = NULL;                // Set head and tail as NULL
    tail = NULL;

    do
    {
        choice = menu();
        switch(choice)
        {
            case 1:
            {
                current = (struct node*)malloc(sizeof(struct node));    // Allocate memory for new node
                printf("Input data for node %d : ", counter + 1);
                scanf("%d", &current->value);
                current->next = NULL;                                   // Point current node to NULL

                if (head == NULL)                                       // Set address of first node
                {
                    head = current;
                    tail = current;
                }
                else                                                    // Set address of following nodes until last node, move through the list
                {
                    tail->next = current;
                    tail = current;
                }

                counter++;
                break;
            }
            case 2:
            {
                struct node *ptr = malloc(sizeof(struct node));
                printf("Input data for node %d : ", 1);
                scanf("%d", &ptr->value);
                ptr->next = NULL;

                ptr->next = head;
                head = ptr;
                break;
            }
            case 3:
            {
                do
                {
                    printf("\nWhat position should new node be inserted at? ");
                    scanf("%d", &position);
                } while (position <= 0);
                
                struct node *ptr = head;
                struct node *ptr2 = malloc(sizeof(struct node));
                printf("Input data for node %d : ", position);
                scanf("%d", &ptr2->value);
                ptr2->next = NULL;

                position--;
                while(position != 1)
                {
                    ptr = ptr->next;
                    position--;
                }

                ptr2->next = ptr->next;
                ptr->next = ptr2;
                break;
            }
            case 4:
            {
                if(head == NULL)
                {
                    printf("\nList is already empty.\n");
                }
                else
                {
                    struct node *temp = head;
                    head = head->next;
                    free(temp);
                    temp = NULL;
                    printf("\nNode 1 has been deleted.\n");
                }
                break;
            }
            case 5:
            {
                do
                {
                    printf("\nAt what position is the node that will be deleted? ");
                    scanf("%d", &position);
                } while (position <= 0);
                storePosition = position;
                
                struct node *current = head;
                struct node *previous= head;
                if(head == NULL)
                {
                    printf("List is already empty.");
                }
                else if (position == 1)
                {
                    head = current->next;
                    free(current);
                    current = NULL;
                }
                else
                {
                    while (position != 1)
                    {
                        previous = current;
                        current = current->next;
                        position--;
                    }
                    previous->next=current->next;
                    free(current);
                    current = NULL;
                }
                printf("\nNode %d has been deleted.\n", storePosition);
                break;
            }
            case 6:
            {
                lastPosition = 1;
                if(head == NULL)
                {
                    printf("List is already empty.");
                }
                else if(head->next == NULL)
                {
                    free(head);
                    head = NULL;
                }
                else
                {
                    struct node *temp = head;
                    struct node *temp2 = head;
                    while(temp->next != NULL)
                    {
                        temp2 = temp;
                        temp = temp->next;
                        lastPosition++;
                    }
                    temp2->next = NULL;
                    free(temp);
                    temp = NULL;
                }
                printf("\nNode %d has been deleted.\n", lastPosition);
                break;
                break;
            }
            printf("\nNode %d has been deleted.\n", storePosition);
            case 7:
            {
                display(head, current);
                break;
            }
            case 8:
            {
                printf("Exiting program...");
                checker = 1;
            }

        }
    } while (checker != 1);
        
    
    

    return 0;
}