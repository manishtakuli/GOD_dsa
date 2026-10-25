#include<stdio.h>

void linerasearch( int arr[],int size,int element){
   for( int i =0 ; i<size ; i++){
    if (arr[i]==element)
    {
        printf("element found at index :%d",i);
        return;
    }
   }
   printf("element not found");
}
int main(){
    int arr[10] = {1,2,43,4,34,6,7,48,9,10};
    linerasearch(arr , 10 , 9);
    return 0;
}