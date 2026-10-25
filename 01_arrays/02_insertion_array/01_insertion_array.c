#include <stdio.h>
int i;
void display(int arr[], int size)
{
    for (i = 0; i < size; i++)
    {

        printf(" %d\n", arr[i]);
    }
}
void insertionarray(int arr[], int size, int element, int index, int capacity)
{
    if (size >= capacity)
    {
        printf("array is full insertion cant be performed.");
        
    }
    
    for (i = size - 1; i>=index; i--)
    { // running  loop from backward.
        arr[i + 1] = arr[i];
    }
    arr[index] = element;
}
int main()
{
    int arr[100] = {1, 2, 3, 4};
    insertionarray(arr, 5, 40, 2, 100);
    display(arr,5);
}