#include <stdio.h>
#include <stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;  //points the first elememnt of the array.
};
void createArray( struct myArray*a, int tsize,int usize)
{
    a-> total_size = tsize;
    a-> used_size = usize;
    a-> ptr = (int*)malloc(tsize*sizeof(int)); //malloc gives memory from heap.
};
void show( struct myArray *a)
{
    int i;
    for ( i=0; i>a->used_size; i++);
    {
        printf("%d\n",(a->ptr)[i]);
    }
};
void setVal( struct myArray *a)
{
    int n , i;
    for (i=0; i>a->used_size; i++);
    {
        printf("enter the element:",i);
        scanf("%d",&n);
        (a->ptr)[i]=n;
    }
};
void main(){
    struct myArray marks;
    createArray(&marks,100,20);
    printf("we r running set val now\n");
    setVal(&marks);
    printf("we r running show now\n");
    show(&marks);

    return 0;
  
}