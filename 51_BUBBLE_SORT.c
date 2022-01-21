#include<stdio.h>
void arrayd(int *A,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
printf("\n");
}
void BubbleS(int *A,int n)
{  
    int temp;
    
    for (int i = 0; i < n-1; i++)
    {   
         printf("the number of passes it takes %d \n",i+1);
        
       
        for (int  j = 0; j < n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                 
            }
           
        } 
        

        
    }
    
}
void BubbleSadaptive(int *A,int n)
{  
    int temp;
    int sortedA=0;
    for (int i = 0; i < n-1; i++)
    {   
         printf("the number of passes it takes %d \n",i+1);
        sortedA=1;
       
        for (int  j = 0; j < n-1-i; j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                 sortedA=0;
            }
           
        } 
        if(sortedA)
        {
            return;
        }

        
    }
    
}
int main(){
    // int A[]={15,45,10,65,1,20};
    // int A[]={1,2,3,4,5,6};
    int A[]={10,50,12,45,46,47,56,1,56,95,13,100};
    int n=11;
    printf("array before bubble sort \n");
    arrayd(A,n);
     BubbleS(A,n);

      arrayd(A,n);
    return 0;
}