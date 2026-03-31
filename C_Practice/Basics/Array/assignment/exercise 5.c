#include <stdio.h>
int main()
{
    int i, N;
    printf("Enter the size of array: ");
    scanf("%d",&N);
    printf("Enter %d elements in the array : \n",N);
    int arr[N];
    for(i=0; i<N; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    printf("\nElements in array are: \n");
    for(i=0; i<N; i++)
    {
        printf("%d ", arr[i]);
        if(i<N-1)
        {
            printf(", ");
        }
    }
    //finding 2nd maximum
    int max1, max2, INT_MIN;
    //max1=max2=INT_MIN;
    for(i=0; i<N; i++)
    {
        if(arr[i]>max1)
        {
            max2= max1;
            max1= arr[i];
        }
        else if(arr[i]>max2 && arr[i]<max1)
        {
            max2=arr[i];
        }
    }
    printf("\nFirst Largest =%d\n",max1);
    printf("Second Largest=%d\n",max2);

    return 0;
}
