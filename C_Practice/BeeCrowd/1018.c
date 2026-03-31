#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d", &m);
    printf("%d\n", m);
    printf("%d nota(s) de R$ 100,00\n", m/100);
    n=m%100;
    printf("%d nota(s) de R$ 50,00\n", n/50);
    n=n%50;
    printf("%d nota(s) de R$ 20,00\n", n/20);
    n=n%20;
    printf("%d nota(s) de R$ 10,00\n", n/10);
    n=n%10;
    printf("%d nota(s) de R$ 5,00\n",  n/5);
    n=n%5;
    printf("%d nota(s) de R$ 2,00\n",  n/2);
    n=n%2;
    printf("%d nota(s) de R$ 1,00\n",  n/1);
    return 0;
}
