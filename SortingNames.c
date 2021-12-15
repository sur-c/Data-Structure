#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// sort function using Selection Sort using some inbuilt functions of string.h
void sort(char arr[][10], int n)
{   
    char temp[10];
    for(int i =0; i < n; i++)
    for(int j = i + 1; j < n; j++)
    { 
        if(strcmp(arr[i],arr[j]) > 0)
        {
            strcpy(temp,arr[i]);
            strcpy(arr[i],arr[j]);
            strcpy(arr[j],temp);
        }
    }
}
   

void main()
{
    // Storing names in array
    char arr[6][10]= {"Animesh","Surajit", "Krishna", "Ritwik", "Soumabha", "Rajesh"};
        
    int n = 6;
   
    // Sort the names array using sort function
    sort(arr, n);

    // Print the sorted names
    printf("Sorted names: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%s \n", arr[i]);
    }
}
