#include<stdio.h>
#include<stdlib.h>

struct myArray{
int total_size;//total size reserved in an array
int used_size;//total used size in an array
int *ptr;//wll take first element
};
void createArray(struct myArray *a , int tsize, int usize)
{
    // (*a).total_size=tsize;
    // (*a).used_size=usize;
    // (*a).ptr=(int *)malloc(tsize*sizeof(int));
    a->total_size=tsize;
    a->used_size=usize;
    a->ptr=(int *)malloc(tsize*sizeof(int));

}

void show( struct myArray *a){
    for(int i=0;i < a->used_size;i++)
    {
        printf(" %d ",(a->ptr)[i]);//ptr where array all things present goes to heap
    }
}
void setval(struct myArray *a)
{
    int n;
for(int i=0;i < a->used_size; i++)
{
    printf("enter the element %d",i);
    scanf("%d",&n);
    (a->ptr)[i]=n;
}
}
int main(){
    struct myArray marks ;
    createArray(&marks,10,2);
    printf("we are running set values \n");
    setval(&marks);

    printf("we are running show \n");
    show(&marks);
    
    return 0;
}