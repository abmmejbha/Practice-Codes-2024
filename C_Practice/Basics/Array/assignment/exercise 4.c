#include<stdio.h>
int main()
{
    int i, N;
    int arr[50];
    printf("Enter the size of array: ");
    scanf("%d", &N);
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: \n");
    for(i=0; i<N; i++){
        printf("%d, ", arr[i]);
    }
    //finding maximum
    int max=arr[0];
    for(i=1; i<N; i++) {
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("\nMaximum = %d", max);
    return 0;
}  