#include<stdio.h>
int main()
{
    int num,digit;
    printf("Enter any numbers:");
    scanf("%d",&num);
    int sum=0;
    for(; num!=0; num/=10)
    {
        digit=num%10;
        sum=sum+digit;
    }
    printf("sum of digits = %d\n",sum);
    return 0;
}

