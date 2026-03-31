#include<stdio.h>

void display(int x[])
{
    int i;
    for(i=0; i<4; i++)
    {
        printf("%d\n",x[i]);
    }
}
int main()
{
    int num[]= {10, 20, 30,50 };
    display(num);
    return 0;
}
