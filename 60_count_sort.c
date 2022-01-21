#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int maximum(int arr[], int n)
{
    int max = INT_MIN; // FROM LIMITS.H FUNCTION WE GET
    for (int i = 0; i < n; i++)

    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max; // get max value from given array
}
void countSort(int *arr, int n)
{ 
    int i ,j;
    // Find the maximum element in A
    int max = maximum(arr, n);
    //// Create the count array
    int *count = (int *)malloc((max + 1) * sizeof(int)); // taking size max in heap suppose 9 size then 9+1 10 that mean s0 to 9
    for ( i = 0; i < max + 1; i++)
    {
        count[i] = 0; //// Initialize the array elements to 0
    }
    // Increment the corresponding index in the count array
    for ( i = 0; i < n; i++)
    {
        count[arr[i]] = count[arr[i]] + 1;
    }
     i = 0; // for count array
     j = 0; // for given array
    while (i <= max)
    {
        if (count[i] > 0)
        {
            arr[j] = i;
            count[i]=count[i]-1;
            j++;
        }
        else
        {
            i++;
        }



    }
}

int main()
{
    int arr[] = {1, 5, 2, 10, 12, 7, 18};
    int n = 7;
    printArray(arr, n);
    countSort(arr, n);
    printArray(arr, n);
    return 0;
}