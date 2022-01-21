#include<stdio.h>



void display(int arr[],int n){
    
    for(int i=0;i<n;i++)
    {
      printf(" %d ",arr[i]);
     
    }
     printf("\n");

}
void indDeletion(int arr[], int size,int index){

for(int i=index;i < size-1;i++)
{
    arr[i]=arr[i+1];//4 hai toh 3
}

}


int main(){
    int arr[100]={10,20,30,40,50};
    int size=5,index=4;
    display(arr,size);
    indDeletion(arr,size,index);
    size -=1;
    display(arr,size);
    return 0;
}