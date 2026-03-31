#include<stdio.h>
int main()
{
    int A[2][3];
    //Inputs for A matrix
printf("Enter elements for matrix A:\n");

    for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("Matrix[%d][%d] =",row,col);
            scanf("%d",&A[row][col]);
        }
    }
    //outputs for A matrix
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
    //inputs for b matrix
    printf("Enter elements for matrix B:\n");
    int B[2][3];
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("Matrix[%d][%d]=\n",row,col);
            scanf("%d",&B[row][col]);
        }
    }
    //output b matrix
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("%d ",B[row][col]);
        }
        //printf("\n");
    }
    //Matrix A + B output
    int C[2][3];
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            C[row][col]=B[row][col]+A[row][col];
        }
    }
printf("summation of C:\n");
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<2; col++)
        {
            printf("%d\t ",C[row][col]);
            //printf("\n");
        }
    }
    return 0;
}
