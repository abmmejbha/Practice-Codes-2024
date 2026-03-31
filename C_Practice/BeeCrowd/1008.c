#include<stdio.h>
int main()
{
    double SALARY,NUM,HOURS,PERHOUR;
    scanf("%lf %lf %lf",&NUM, &HOURS,&PERHOUR);
    SALARY = (float)HOURS*PERHOUR;
    printf("NUMBER = %.0lf\n",NUM);
    printf("SALARY = U$ %.2lf\n",SALARY);
    return 0;
}
