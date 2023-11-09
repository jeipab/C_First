#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *next;
} *current, *head, *tail;

int main()
{
    int checker = 0, counter = 0, temp;
    struct node *headEven = NULL, *headOdd = NULL, *currentEven, *currentOdd;

    head = NULL;
    tail = NULL;

    do
    {
        current = (struct node *)malloc(sizeof(struct node));
        printf("\nInput data for node %d: ", counter + 1);
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
            printf("\nChoose:\n1. Continue adding\n2. Separate odd and even elements.\nEnter your choice: ");
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
        if (current->value % 2 == 0)
        {
            if (headEven == NULL)
            {
                headEven = (struct node *)malloc(sizeof(struct node));
                currentEven = headEven;
            }
            else
            {
                currentEven->next = (struct node *)malloc(sizeof(struct node));
                currentEven = currentEven->next;
            }
            currentEven->value = current->value;
            currentEven->next = NULL;
        }
        else
        {
            if (headOdd == NULL)
            {
                headOdd = (struct node *)malloc(sizeof(struct node));
                currentOdd = headOdd;
            }
            else
            {
                currentOdd->next = (struct node *)malloc(sizeof(struct node));
                currentOdd = currentOdd->next;
            }
            currentOdd->value = current->value;
            currentOdd->next = NULL;
        }
        current = current->next;
    }

    temp = 0;
    current = headOdd;
    printf("\nOdd elements:\n");
    while (current != NULL)
    {
        printf("Data %d = %d\n", temp + 1, current->value);
        current = current->next;
        temp++;
    }

    temp = 0;
    current = headEven;
    printf("\nEven elements:\n");
    while (current != NULL)
    {
        printf("Data %d = %d\n", temp + 1, current->value);
        current = current->next;
        temp++;
    }

    return 0;
}