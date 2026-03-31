#include<stdio.h>
int main ()
{
int A,h;
float area;
printf("Enter the value of A and h:");
scanf("%d%d",&A,&h);
area = (float)(0.5)*A*h;
printf("Area of the Triangle = %0.2f", area);
return 0;
}
