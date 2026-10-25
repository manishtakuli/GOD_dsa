#include <stdio.h>

void binarysearch(int arr[], int size, int element)
{

    int low, high, mid;
    while (low <= high)  // checks element until low is equal to high 
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            printf("element found at index :%d\n", mid);
            return mid;
        }
        if (arr[mid] < element) // checks is mid is smaller then element
        {
            low = mid + 1; // if mid is smaller it makes mid to low +1
        }
        else
        {
            high = mid - 1; // if mid is higher then element it makes mid to high +1
        }
    }
    printf("element not found\n"); //if element not found intil low = high , returns element not found. **end of do while loop
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    binarysearch(arr, 10, 9);
    return 0;
}