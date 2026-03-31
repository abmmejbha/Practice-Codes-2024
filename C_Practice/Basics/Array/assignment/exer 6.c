#include <stdio.h>

int main()
{
    int arr[n];
    int n, i;
    int max1, max2;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("Enter elements in the index: ");
    for (i = 0; i<n; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d", &arr[i]);
    }

    max1=max2=arr[0];

    for (i=1; i<n; i++)
    {
        if (arr[i]>max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if(arr[i]>max2)
        {
            max2=arr[i];
        }
    }

    printf("Second largest element = %d\n", max2);

    return 0;
}
