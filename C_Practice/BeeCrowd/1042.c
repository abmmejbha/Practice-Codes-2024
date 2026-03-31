#include<stdio.h>
int main()
{
    int a,b,c;
    int min, max,mid;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    {
        max=a;
        if(b>c)
        {
            mid=b;
            min=c;
        }
        else
        {
            mid=c;
            min=b;
        }
    }
    else if(b>a && b>c)
    {
        max=b;
        if(a>c)
        {
           mid=a;
           min=c;
        }
        else
        {
            mid=c;
            min=a;
        }
    }
    else
    {
        max=c;
        if(b>a)
        {
            mid=b;
            min=a;
        }
        else
        {
            mid=a;
            min=b;
        }
    }
        printf("%d\n%d\n%d\n",min,mid,max);
        printf("\n%d\n%d\n%d\n", a, b, c);
        return 0;
}
