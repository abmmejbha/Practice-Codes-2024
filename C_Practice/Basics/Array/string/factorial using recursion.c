#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number for factorial:\n");
    scanf("%d",&n);
    int result = fact(n);
    printf("Factorial of %d is = %d",n,result);
}

int fact(int n)
{
    if (n==1)
        return 1;
    else
        return n*fact(n-1);

}
