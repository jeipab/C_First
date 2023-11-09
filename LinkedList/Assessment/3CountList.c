#include <stdio.h>
#include <malloc.h>

struct list
{
    int value;              // Value stored in the node
    struct list *next;      // Pointer to the next node in the linked list
} *current, *head, *tail;   // Structure pointers

int main()
{
    int numNodes, i, nodeCounter = 0;           // Variable declaration

    printf("Input the number of nodes: ");      // Input for intended number of nodes
    scanf("%d", &numNodes);

    head = NULL;                                // Set head and tail as NULL
    tail = NULL;

    for (i = 0; i < numNodes; i++)              // Add nodes to the linked list
    {
        current = (struct list*)malloc(sizeof(struct list));    // Allocate memory for new node
        printf("Input data for node %d : ", i + 1);
        scanf("%d", &current->value);
        current->next = NULL;               // Point current node to NULL

        if (head == NULL)                   // Set address of first node
        {
            head = current;
            tail = current;
        }
        else                                // Set address of following nodes until last node, move through the list
        {
            tail->next = current;
            tail = current;
        }
    }

    current = head;                             // Set head as current node
    printf("\nData entered in the list:\n");
    while (current != NULL)                     // Display and iterate through the nodes
    {
        printf("Data = %d\n", current->value);
        current = current->next;
    }

    current = head;                             // Set head as current node
    while (current != NULL)                     // Count as the program iterates through the linked list
    {
        current = current->next;
        nodeCounter++;
    }

    printf("\nTotal number of nodes = %d", nodeCounter);    // Display number of nodes

    return 0;
}