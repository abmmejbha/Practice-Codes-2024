#include<stdio.h>
int main()
{
    int y,m,t,d,n;
    scanf("%d", &t);

    y=t/365;
    n=t%365;
    m=n/30;
    d=n%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", y,m,d);
    return 0;
}
