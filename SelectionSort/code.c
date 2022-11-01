#include <stdio.h>
#include <stdlib.h>


void selectionSort(int arr[], int n)
{
    for(int i=0; i<(n-1); i++)
    {
        int min = i; // Min-Index

        for(int j=i+1; j<n; j++)
        {
            if(arr[j] < arr[min])
            {
                min = j;
            }
        }

        if(min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}

void display(int arr[], int n){

    printf("\nThe Sorted Array is :\n");

    for (int i = 0; i < n; i++)
    {
       printf("%5d", arr[i]);
    }
    

}


void input(int arr[], int n){

    printf("Enter elements into the array: ");

    for(int i=0; i<n; i++){

       printf("Enter element %d: ",i);
       scanf("%d",&arr[i]);
    }

    printf("\n Unsorted Array: \n");
    for (int i = 0; i < n; i++)
    {
       printf("%5d",arr[i]);
    }

}


int main()
{
    printf("Selection Sort!!!\n");
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int array[size];

    input(array, size);

   selectionSort(array, size);

    display(array, size);
    return 0;
}