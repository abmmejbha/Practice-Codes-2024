#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);

    if(year%400==0 && year%4==0)
    {
        printf("The Year %d is LEAP YEAR!!", year);
    }
    else
    {
        printf("The Year %d is NOT LEAP YEAR!!");
    }
    return 0;
}
