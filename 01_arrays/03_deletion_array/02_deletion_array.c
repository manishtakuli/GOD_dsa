#include <stdio.h>
int i;
void display(int arr[], int n)
{
    for (i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}
deletionarray(int arr[], int size, int index)
{

    for (i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
}
int main()
{
    int arr[100] = {1, 2, 3, 4, 5};

    deletionarray(arr, 5, 2);
    display(arr, 4);
}