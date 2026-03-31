#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*Difference between malloc() and calloc()
    Initialization: 
    malloc() allocates memory block if given size (in bytes) and returns a pointer to the beginning of the
    block. malloc() doesn't initilize the allocated memory.If we try to access the content of memory block(before
    initilizing) then we'll get segmentation error(or maybe garbage value).

    calloc () allocates the memory and also initializes the allocated memory block to zero. If we try to access
    the content of these blocks then we'll get 0.
    */

    int *ptr1,*ptr2;
    ptr1 = (int *)malloc(5 * sizeof(int));
    ptr2 =(int *)calloc(5, sizeof(int)) ;
    if(ptr1== NULL || ptr2 == NULL){
        printf("memory is not allocated");
    } else{
        printf("memory allocation is successful\n");
        ptr1= realloc(ptr1, 50);
        printf("MEMORY reallocation is succe3sssfull\n");
    }

    printf("%d\n",*ptr1);  //showing garbage value
    printf("%d\n",*ptr2);  //showing 0
    return 0;

}