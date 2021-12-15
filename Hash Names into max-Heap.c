#include <stdio.h>
#include<stdlib.h>
#include <string.h>


// Function heapify arranges the array to make a max-heap
void heapify(int arr[], int n, int i)
{
    // Finding parent
    int parent = (i - 1)/2;
 
    if (arr[parent] > 0) 
    {
        // For Max-Heap, if current node is greater than its parent
        // Swap both of them and call heapify again for the parent.
        if (arr[i] > arr[parent]) 
        {
            int temp = arr[i];
            arr[i]= arr[parent];
            arr[parent] = temp;

            // Recursively heapify the parent node
            heapify(arr, n, parent);
        }

    }
}

// Function to arrange elements one-by-one to arr by calling heapify
void buildHeap(int arr[], int n)
{
 
   for (int i = 1; i < n; i++) 
   {
       heapify(arr, i + 1, i);
   }
}

// Function to print the array representation of Heap
void printHeap(int arr[], int n)
{
    printf("Array representation of Heap is:\n"); 
    for (int i = 0; i < n; ++i)
        printf("%d\n",arr[i]);
   
}
// Function to sort array in accending order
void sort(char arr1[][10], int n)
{   
    char temp[10];
    for(int i =0; i < n; i++)
    for(int j = i + 1; j < n; j++)
    { 
        if(strcmp(arr1[i],arr1[j]) > 0)
        {
            strcpy(temp,arr1[i]);
            strcpy(arr1[i],arr1[j]);
            strcpy(arr1[j],temp);
        }
    }
}
// Driver Code
void main()
{
    // Storing names in array
    char arr1[6][10]= {"Animesh","Surajit", "Krishna", "Ritwik", "Soumabha", "Rajesh" };
    int s = 6;
    
    // Sort the names array by sending Comp as argument using qsort function
    sort(arr1, s);
    
    int arr[10];

    // Print and indexing the sorted names.
    // Notice "Surajit" is last in the sorted array so will have highest value.
    printf("Sorted names: \n"); 
    for (int key = 0; key < s; key++)
    {
        printf("%s \n", arr1[key]);
        arr[key]=key + 1;
    }

    // Making the others places in the array as 0
    for(int key = s+1; key<10;key++)
    arr[key]= 0;

    // calculating the no. of values in array (!=0)
    int n = 0 ,i;
    for(i = 0; arr[i] != 0; i++)
    n++;

    // calling builtHeap and printHeap function to make and display the Heap.
    buildHeap(arr, n);
    printHeap(arr, n);
    
}