#include<stdio.h>
int main ()
{
    int code_of_product_2,unit2,code_of_product_1,unit1;
    double price1,price2,total;
    scanf("%d %d %lf",&code_of_product_1,&unit1,&price1);
    scanf("%d %d %lf",&code_of_product_2,&unit2,&price2);
    total = (double)(unit2*price2)+(unit1*price1);
    printf("VALOR A PAGAR: R$ %.2lf\n",total);
return 0;
}
