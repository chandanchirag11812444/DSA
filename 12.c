#include<stdio.h>




int binarySearch(int arr[],int size, int element){
  int low,mid,high;
  low=0;
  high=size-1;
  while(low<=high){
  mid=(low+high)/2;
  if(arr[mid]==element)
  {
      return 1;
  }
  if(arr[mid]<element)
  {
   low=mid+1;
  }
  else{
      high=mid-1;
  }
  }
return -1;
}
// //for linear search transversal when found stop
// int linearSearch(int arr[],int size,int element)
// {
//     for(int i=0;i<size;i++)
//     {
       
//     if(arr[i]==element)
//     {
//         return i;
//     }

//     }
//     return -1;

// }
int main(){
    //unsorted array of linear search 
    // int arr[] = {1,3,5,56,64,73,123,225,444};
//sorted array binary search med=low+high/2 right sde then low =mid+1 then left side high =mid-1;
    int arr[] = {1,3,5,7,9,20,21,25};
    int size=sizeof(arr)/sizeof(int);
    int element =21;
    //int searchindex=linearSearch(arr,size,element);
    int searchindex=binarySearch(arr,size,element);
    printf("element found %d  at index %d \n",element,searchindex);
    return 0;
}