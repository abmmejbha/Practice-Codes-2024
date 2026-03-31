#include<stdio.h>
int main()
{
    double base, exp, result;

    printf("Enter base:\n");
    scanf("%lf",&base);

    printf("Enter Exponent = \n");
    scanf("%lf",&exp);
    result = pow(base,exp);
    printf("%.2lf",result);
}
