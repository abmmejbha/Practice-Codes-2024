#include<stdio.h>
int main ()
{
    double R,pi, VOLUME;
    scanf("%lf",&R);
    pi=3.14159;
    VOLUME = (4/3.0) * pi * (R*R*R);
    printf("VOLUME = %.3lf",VOLUME);
    return 0;
}
