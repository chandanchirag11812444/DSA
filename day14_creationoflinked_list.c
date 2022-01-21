#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;

};

void LinkedListTraversal(struct Node *ptr){
    while(ptr != NULL)
    {
        printf("Element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}


int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    //Allocate memory for nodes in the linked list in Heap
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
   third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    //Link first and second nodes
    head->data=10;
    head->next=second;
    //links 2nd and third node
    second->data=15;
    second->next=third;
    //links for third and fourth
    third->data=20;
    third->next=fourth;
    //terminate the list at the third node
    fourth->data=25;
    fourth->next=NULL;
    LinkedListTraversal(head);
    return 0;
}