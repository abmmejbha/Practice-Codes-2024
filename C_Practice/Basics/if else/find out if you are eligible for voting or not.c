#include<stdio.h>
int main ()
{
    float age;
    printf("Enter your age:");
    scanf("%f", &age);

    if(age>=18)
    {
        printf("You are eligible for Voting!");
    }
    else
    {
        printf("You are not eligible for Voting!");
    }
    return 0;
}
