#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf %lf %lf",&a,&b,&c);
    if(a>=b+c)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if(a*a==b*b+c*c)
        {
            printf("TRAINGULO RETANGULO\n");
        }
        else if(a*a>b*b+c*c)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else if(a*a<b*b+c*c)
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        else if(a==c==b)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (a==b || a==c || b==c)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}
