#include <stdio.h>
int main()
{
    int num1;
 level:
    printf("Enter any number:");
    scanf("%d",&num1);

    if(num1%2==0)
    {
        printf(" %d is even\n", num1);
    }
    else
    {
        printf("The %d is odd!\n", num1);
    }
    goto level;
    return 0;
}
