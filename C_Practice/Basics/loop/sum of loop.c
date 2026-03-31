#include<stdio.h>
int main ()
{
    int i,sum,n;
     i=1;
     //sum = 0;
     printf("Enter the value of n:");
     scanf("%d",&n);

     while(  i<=n)
     {
         printf("%d\n",i);
         sum+=i;
         i++;
     }
    printf("sum = %d",sum);
    return 0;
}
