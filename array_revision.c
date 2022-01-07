#include <stdio.h>
#include <stdlib.h>

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}
void InsertAtIndex(int arr[], int capacity, int size, int index, int element)
{
    if (size >= capacity)
    {
        printf("array is full");
    }
    else
    {
        for (int i = size - 1; i >= index; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[index] = element;
    }
}

void deleteAtIndex(int arr[], int size, int index)
{

    for (int i = index; i <= size; i++)
    {
        arr[i] = arr[i + 1];
    }
}

int main()
{
    int arr[100] = {1, 4, 5, 6, 7, 9};
    int element = 8;
    int size = 6;
    int index = 3;
    displayArray(arr, size);

    InsertAtIndex(arr, 100, size, index, element);
   displayArray(arr, size);
   
   
   
   
    size = size + 1;
    displayArray(arr, size);
    deleteAtIndex(arr, size, index);
    size = size - 1;
    displayArray(arr, size);
}