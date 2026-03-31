#include<stdio.h>
int main()
{
    int n,num,reverse=0;
    printf("Enter the number to check palindrome:\n\n");
    scanf("%d",&num);
    n=num;

    for(;num!=0; num/=10)
    {
        reverse= (reverse * 10)+(num % 10);
    }
    printf("reverse = %d\n\n",reverse);

    if(n == reverse)
    {
        printf("The number is PALINDROME!\n\n");
    }
    else
    {
        printf("The number %d is NOT PALINDROME!\n",num);
    }
    return 0;
}
