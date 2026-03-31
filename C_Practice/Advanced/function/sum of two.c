#include<stdio.h>
void sum(int a, int b, int c)
{
    printf("The sum of : %d\n",a+b+c);
}

int main()
{
    sum(2,6,8);
    sub(3,9);
    int num;
    printf("Enter any integer number:\n");
    scanf("%d",&num);
    int result = square(num);
    printf("Square is : %d \n ",result);
}
