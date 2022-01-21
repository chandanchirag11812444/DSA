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
    printf(" is ful : %d \n",isFull(s));
    return 0;
}