#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;

    printf("Value of the x is =\n",x);
    printf("Value of the x is =\n",*p);
    return 0;
}