#include<stdio.h>
int main ()
{
    int i,sum,n;
     //sum = 0;
     printf("Enter the value of n:");
     scanf("%d",&n);

     for( i=1; i<=n; i++)
     {
         printf("%d\n",i);
         sum+=i;
     }
    printf("sum = %d",sum);
    return 0;
}
