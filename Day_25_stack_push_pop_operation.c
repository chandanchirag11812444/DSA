#include<stdio.h>
struct stack{
    int size;
    int top ;
    int *arr;

};
int main(){
    struct stack *s;
    s->size=6;
    s->top=-1;
    s->arr=(int *)malloc(s->size*sizeof(int));
    if(isFull(s))
    {
        printf("the stack overflow");
    }
    else{
        int value;//for push
        s->top++;
        s->arr[s->top]=value;

    }
    //for pop
    if(isEmpty(s))
    {
        printf("the stack is underflow\n");

    }
    else{
        int value=s->arr[s->top];
        s->top=s->top-1;
        return value;
    }
    return 0;
}