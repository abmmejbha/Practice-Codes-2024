#include <stdio.h>
int main()
{
    int i, N,sum=0;
    int arr[50];
    printf("Enter the size of array: ");
    scanf("%d", &N);
    printf("Enter %d elements in the array : ", N);
    for(i=0; i<N; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nElements in array are: \n");
    for(i=0; i<N; i++)
    {
        printf("%d\n", arr[i]);
        sum+=arr[i];
    }
    printf("sum= %d",sum);
    return 0;
}

