#include<stdio.h>
int main()
{
    int row,col,k,n;
    printf("Enter the number of rows:");
    scanf("%d",&n);
    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
            printf(" ");
        }
        for(k=1; k<=(2*row-1); k++){
            printf("*");
        }
    printf("\n");
    }


    return 0;
}
