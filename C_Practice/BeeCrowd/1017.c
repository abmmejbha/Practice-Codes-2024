#include<stdio.h>
int main()
{
    int time,aver;
    double total;
    scanf("%d %d",&time,&aver);
    total=(aver*time)/12.0;
    printf("%.3lf\n",total);
    return 0;
}
