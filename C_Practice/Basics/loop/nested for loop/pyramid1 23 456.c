#include<stdio.h>
int main()
{
    int row,col,n,a=1;
    printf("Enter N: ");
    scanf("%d",&n);
    for(row=1; row<=n; row++){
        for(col=1; col<=row; col++)
        {
            printf("%d ",a);
            a++;
        }
        printf("\n");
    }
    return 0;
}
