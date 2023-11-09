#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *link;
};

struct node *del_first(struct node *head)
{
    if(head == NULL)
    {
        printf("List is already empty.");
    }
    else
    {
        struct node *temp = head;
        head = head->link;
        free(temp);
        temp = NULL;
    }
    return head;
}

int main()  // Assumes that a list already exists
{
    head = del_first(head);
    ptr = head;

    while(ptr != NULL)
    {
        printf("%d ", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}