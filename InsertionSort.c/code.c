#include <stdio.h>
#include <stdlib.h>

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

void insertionSort(int arr[], int n){

    for(int i=1; i<n; i++)
    {
        int temp = arr[i];
        int j = i-1;

        while(j>=0 && arr[j]>temp)
        {
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = temp;
    }
}


void display(int arr[], int n){

    printf("\nThe Sorted Array is :\n");

    for (int i = 0; i < n; i++)
    {
       printf("%5d", arr[i]);
    }
    

}


int main(){

    printf("Insertion Sort Program!!\n");
    int size;
    printf("Enter the size of array: ");
    scanf("%d",&size);

    int array[size];

    input(array, size);

    insertionSort(array, size);

    display(array, size);

    return 0;
}