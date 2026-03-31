#include <stdio.h>
int main()
{
    int i, m = 0,n;
    scanf("%d",&n);
    int array[5];
    for (i = 1; i <= n; i++)
    {
        if(i%2==0)
        {
            printf("%d^2 = %d\n",i,i*i);
        }
    }
    return 0;
}
