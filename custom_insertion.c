#include <stdio.h>
#include <stdlib.h>

void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", &arr[i]);
    }
    printf("\n");
}

int main()
{

    int size;
    int arr[100];
    printf("Enter the size of Array\n");
    scanf("%d", &size);

    for (int i = 0; i <arr[size]; i++)
    {
        // printf("Enter the Value for index %d \n ", &i);
        scanf("%d", arr[i]);
    }
    // insertion at last 
  display(arr,size);
    size += size;
    arr[size - 1] = 99;

    display(arr,size);
}