#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;
    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if(i<j){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
        }
    } while (i < j);
     // Swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
    return j;
}
void QuickSort(int A[], int low, int high)
{

    int partitionIndex;//// Index of pivot after partition
    if (low < high)
    {
        printArray(A,9);
        partitionIndex = partition(A, low, high);
        QuickSort(A, low, partitionIndex - 1);  // left sub array
        QuickSort(A, partitionIndex + 1, high); // right sub array
    }
}

int main()
{

    int A[] = {5, 4, 89, 50, 1, 10,65,56,45};
    int n = 9;
    printArray(A, n);
    QuickSort(A, 0, n-1);
    printArray(A, n);
    return 0;
}