#include <stdio.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *n;                                 // creating a node pointer
    n = (struct node *)malloc(sizeof(struct node)); // allocating the memory in the heap
    n->data = data;                                 // setting the data
    n->left = NULL;                                 // setting left and right chilf=dren to null
    n->right = NULL;
    return n; // finally returning the created node
}
void preOrder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d ", root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
void postOrder(struct node *root)
{
    if (root != NULL)
    {

        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}
void inOrder(struct node *root)
{
    while (root != NULL)
    {

        if (root != NULL)
        {

            inOrder(root->left);
            printf("%d ", root->data);
            inOrder(root->right);
        }
    }
}
// int isBST(struct node *root)
// {
//     static struct node *prev=NULL;
//     if(root!=NULL)
//     {
//         if(!isBST(root->left))
//         {
//             return 0;

//         }
//         if(prev!=NULL && root->data <= prev->data)
//         {
//             return 0;
//         }
//         prev=root;
//         return isBST(root->right);
//     }
//     else{
//         return 1;
//     }

// }
int isBST(struct node *root)
{
    static struct node *prev = NULL;
    if (root != NULL)
    {
        if (!isBST(root->left))
        {
            return 0;
        }
        if (prev != NULL && root->data <= prev->data)
        {
            return 0;
        }
        prev = root;
        return isBST(root->right);
    }
    else
    {
        return 1;
    }
}
struct node *searchITERATIVE(struct node *root, int key)
{
    while (root!= NULL)
    {
        if (key == root->data)
        {
            return root;
        }
        else if (key < root->data)
        {
            root= root->left;
        }
        else
        {
            root= root->right;
        }
    }
    return NULL;
}
void insert(struct node *root,int key)
{
    struct node *prev=NULL;
    while (root!=NULL)
    {
        prev=root;
        if(key==root->data)
        {
             printf("%d is not insert into BST,already there  ",key);
             return;
        }
        else if(key<root->data)
        {
            root=root->left;
        }
        else
        {
            root=root->right;
        }
    }
   
   struct node *new=createNode(key);
   if(key<prev->data)
   {
       prev->left=new;
   }
   else{
       prev->right=new;
   }

    
    
}
int main()
{
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
    struct node *p = createNode(5);
    struct node *p1 = createNode(3);
    struct node *p2 = createNode(6);
    struct node *p3 = createNode(1);
    struct node *p4 = createNode(4);
    // Finally The tree looks like this:
    //      5
    //     / \
    //    3  6
    //   / \
    // 1   4

    // Linking the root node with left and right children

    // linking the root node with with left and right node
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    // preOrder(p);
    // printf("\n");
    // postOrder(p);
    // inOrder(p);
    // printf("\n");
    // // printf("%d \n",isBST(p));
    // if(isBST(p)){
    //     printf("This is a bst" );
    // }
    // else{
    //     printf("This is not a bst");
    // }
insert(p,5);
printf("%d ",p->right->right->data);
    
    return 0;
}