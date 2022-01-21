#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int isFull(struct stack *ptr)
{
   if(ptr->top==ptr->size-1) 
   {
       return 1;
   }
   else{
       return 0;
   }
}
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
void push(struct stack *ptr,int value)
{
    if(isFull(ptr))
    {
        printf("the stack is overflow and cannont push %d to stack \n",value);

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top]=value;
    }
}
int pop(struct stack *ptr)
{
    if(isEmpty(ptr))
    {
        printf("the stack is underflow and cannont pop  to stack \n");
       return -1;
    }
    else{
        int value=ptr->arr[ptr->top];
        ptr->top--;
        return value ;
    }
}
int peek (struct stack *s ,int i)
{
    if(s->top-i+1<0)
    {
        printf("Not a valid position\n");
    }
    else{
        return s->arr[s->top-i+1];
    }
}
int stacktop(struct stack *s)
{
return s->arr[0];
}
int stackbottom(struct stack *s)
{
return s->arr[s->top];
}
int main(){
    struct stack *s=(struct stack *)malloc(sizeof(struct stack));
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    printf("stack has been performed\n");
    printf(" %d \n",isEmpty(s));
    printf(" %d \n",isFull(s));
    push(s,54);
    push(s,45);
    push(s,45);
    push(s,45);
    push(s,5);
    push(s,6);
    push(s,7);
    push(s,8);
     push(s,9);
     push(s,10);//pushed 10 values 
    // push(s,20);//stack overflow since stack is full
    printf("after pushing ,Full :%d \n",isFull(s));
    printf("after pushing ,empty:%d \n",isEmpty(s));
   
    printf("popped %d from the stack \n",pop(s));
    printf("popped %d from the stack \n",pop(s));
    printf("popped %d from the stack \n",pop(s));
    printf("popped %d from the stack \n",pop(s));
    // for(int j=1;j<=s->top+1;j++)
    // {
    //     printf("the position at %d  is %d \n",j,peek(s,j));
    // }
printf("the top most avlue of the stack is %d \n",stacktop(s));
printf("the bottom most avlue of the stack is %d \n",stackbottom(s));
    return 0;
}