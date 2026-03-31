
#include<stdio.h>

int maximum(int x[])
{
    int i;
    int max=x[0];
    for(i=1; i<4; i++)
    {
        if(max<x[i]);
        max=num[i];
    }
    return max;
}
int main()
{
    int num[]= {10, 20, 30,50 };
    display(num);
    int maximumValue= maximum(num);
    return 0;
}
