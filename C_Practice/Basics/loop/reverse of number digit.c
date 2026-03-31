#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);

    int reverse=0;
    for(; num!=0; num/=10)
    {
        reverse=(reverse * 10)+( num % 10);
       // num = num/10;
    }
    printf("reverse = %d",reverse);
}
