#include<stdio.h>
int main()
{
    int row,col;
    printf("Enter the row and column for matices:\n");
    scanf("%d %d",&row,&col);
    int arr[row][col];
    printf("Enter the elements of array:");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("arr[%d][%d]=",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            printf("%d\t",arr[i][j] );
        }
        printf("\n");
    }


    return 0;

}
