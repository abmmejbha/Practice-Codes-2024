
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the value of n= ");
    scanf("%d",&n);
    for(row=1; row<=n; row++){
        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
            printf("%d ",row);
        }
        printf("\n");
        {
        for(col=1; col<=n-row; col++){
            printf("  ");
        }
        for(col=1; col<=row; col++){
            printf("%d ",row);
        }
        printf("\n");
        }



   int i, space, rows, k = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, k = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
   return 0;
}




return 0;
}
