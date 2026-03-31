#include<stdio.h>
int main()
{
    double base,exp,result,i;
    printf("Enter the base =\n");
    scanf("%lf",&base);
    printf("Enter the exponent =\n");
    scanf("%lf",&exp);

    for(i =1; i<=exp; i++)
    {
        result *= base;
    }
    printf("result = %0.2lf\n",result);


}
