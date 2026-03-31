#include<stdio.h>
int main()
{
    int n,  i = 1, sum = 0;
    printf("Enter the upper limit n:");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d\n",i);
        sum+=i;
        ++i;
    }
    printf("sum=%d\n",sum);
    return 0;
}
