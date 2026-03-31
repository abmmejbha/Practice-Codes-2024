#include<stdio.h>
int main()
{
    //int m,n;
    double m,n;
    scanf("%lf", &m);
    printf("NOTAS:\n", m);
    printf("%d nota( s) de R$ 100.00\n", m/100);
     n=m%100;
    printf("%d nota(s) de R$ 50.00\n", n/50);
    n=n%50.0;
    printf("%d nota(s) de R$ 20.00\n", n/20);
    n=n%20.0;
    printf("%d nota(s) de R$ 10.00\n", n/10);
    n=n%10.0;
    printf("%d nota(s) de R$ 5.00\n",  n/5);
    n=n%5.0;
    printf("%d nota(s) de R$ 2.00\n",  n/2);
    n=n%2.0;
    MOEDAS:
    printf("%d nota(s) de R$ 1.00\n", n/1.0);
    n=n%1.0;
    printf("%d nota(s) de R$ 0.50\n",n/0.50);
    n=n%0.50;
    printf("%d nota(s) de R$ 0.25\n", n/0.25;
    n=n%0.25;
    printf("%d nota(s) de R$ 0.10\n",  n/0.10);
    n=n%0.10;
    printf("%d nota(s) de R$ 0.05\n",  n/0.05);
    n=n%0.05;
    printf("%d nota(s) de R$ 0.01\n",  n/0.01);

    return 0;
}

