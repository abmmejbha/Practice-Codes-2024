#include<stdio.h>
int main()
{
    int h,m,t,s;
    scanf("%d", &t);
    m=t/60;
    h=m/60;
    s=t%60;
    m=m%60;
    printf("%d:%d:%d\n", h,m,s);
    return 0;
}
