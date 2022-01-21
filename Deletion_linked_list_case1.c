//deletion at first 
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

 struct Node *DeletionatFirst(struct Node *head)
 {
     struct Node *ptr=head;
     head=head->next;
     free(ptr);
     return head;
 }


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second nodes
    head->data =10;
    head->next = second;

    // Link second and third nodes
    second->data = 8;
    second->next = third;

    // Link third and fourth nodes
    third->data = 15;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 20;
    fourth->next = NULL;
    printf("link list before deletion\n");
    linkedListTraversal(head);
    head=DeletionatFirst(head);
    printf("\nlinked list after deletion\n");
    linkedListTraversal(head);


   
    
    return 0;
}