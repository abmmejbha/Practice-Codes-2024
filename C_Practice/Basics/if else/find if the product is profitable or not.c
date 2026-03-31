#include<stdio.h>
int main ()
{
int x,y;
printf("Enter the value of buying price and selling price:");
scanf("%d%d", &x,&y);

if(x<y)
{
    printf("the product is profitable!");
}
else
{
    printf("the product is not profitable!");
}
return 0;
}
