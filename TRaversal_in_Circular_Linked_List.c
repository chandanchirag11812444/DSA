#include<stdio.h>
#include<stdlib.h>
struct Node 
{
 int data;
 struct Node *next;
};


struct Node *CircluarListTraversal(struct Node *head)
{
struct Node *ptr=head;
do{
 printf("the element is %d \n",ptr->data);
 ptr=ptr->next;
} while(ptr!=head);

}

struct Node *CircluarListInsertatFirst(struct Node *head ,int data)
{
    struct Node *ptr=(struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p=head->next;
    while(p->next!=head)
    {
        p=p->next;
    }
p->next=ptr;
ptr->next=head;
return ptr;

}
int main(){
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    head=(struct Node *)malloc(sizeof(struct Node));
    second=(struct Node *)malloc(sizeof(struct Node));
    third=(struct Node *)malloc(sizeof(struct Node));
    fourth=(struct Node *)malloc(sizeof(struct Node));
    head->data=1;
    head->next=second;
    second->data=5;
    second->next=third;
    third->data=7;
    third->next=fourth;
    fourth->data=20;
    fourth->next=head;
    printf("before\n");
    CircluarListTraversal(head);
    head=CircluarListInsertatFirst(head,88);
    printf("after \n");
    CircluarListTraversal(head);
    return 0;
}