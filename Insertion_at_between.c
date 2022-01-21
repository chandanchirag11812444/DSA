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


struct Node *insertAatIndex(struct Node *head,int data,int index){
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    struct Node *p=head;//head is the first node 
    int i=0;
    while(i!=index-1)//index-1 hi jayega uske aage nhi 
    {
        p=p->next;
        i++;
    }
    
//ab p->next jahan tha vahan ptr->next jayegaor p->next ptr ke pass a jayega
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    //data main ab ptr->data (naya data jayega)vor orginal data head ke pass aa jeyaga
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
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    printf("link list before insertion\n");
    linkedListTraversal(head);
    head=insertAatIndex(head,56,1);
    printf("\nlinked list after insertion\n");
    linkedListTraversal(head);


   
    
    return 0;
}