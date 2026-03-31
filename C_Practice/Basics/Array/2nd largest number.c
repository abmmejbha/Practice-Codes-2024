#include<stdio.h>
int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max1;
    int max2;
    for (int i=0; i<n; i++)
    {
        if (arr[i]>max1)
        {
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2)
        {
            max2=arr[i];
        }
    }
    printf("Second largest element: %d\n", max2);
    return 0;
}
