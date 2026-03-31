#include<stdio.h>
int main()
{
    int i, n;
    i = 1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==1)
        printf("%d\n",i);
        i++;
    }
    return 0;
}
