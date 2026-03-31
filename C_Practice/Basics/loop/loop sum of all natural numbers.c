#include<stdio.h>
int main()
{
int i,n,sum=0;
printf("Enter upper limit for sum:");
scanf("%d",&n);
for(i=1; i<=n; i++)
    {
       sum += i;
    }
printf("sum of 1 to %d numbers %d",n,sum);
return 0;
}
