#include<stdio.h>
#include<malloc.h>
struct node{
  int data;
  struct node *left;
  struct node *right;
 
};
struct node *createNode(int data)
{
    struct node *n;//creating a node pointer
    n=(struct node *)malloc(sizeof(struct node));//allocating the memory in the heap
    n->data=data;//setting the data
    n->left=NULL;//setting left and right chilf=dren to null
    n->right=NULL;
    return n;//finally returning the created node

}
void preOrder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main(){
    /*
    // Constructing the root node
    struct node *p;
    p = (struct node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node
    struct node *p1;
    p1 = (struct node *) malloc(sizeof(struct node));
    p->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node
    struct node *p2;
    p2 = (struct node *) malloc(sizeof(struct node));
    p->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    */
   // Constructing the root node - Using Function (Recommended)
    struct node *p=createNode(4);
    struct node *p1=createNode(1);
    struct node *p2=createNode(6);
    struct node *p3=createNode(5);
    struct node *p4=createNode(2);
 // Finally The tree looks like this:
    //      4
    //     / \
    //    1   6
    //   / \
    //  5   2  

    // Linking the root node with left and right children
    
    

    //linking the root node with with left and right node
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    preOrder(p);
    return 0;
}