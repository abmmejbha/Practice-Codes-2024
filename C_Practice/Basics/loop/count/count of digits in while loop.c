#include<stdio.h>
int main()
{
    int num;
    int count = 0;
    printf("Enter any number:\n",num);
    scanf("%d",&num);

    while (num != 0)
    {
        num=num/10;
        count++;
    }
    printf("total digits: %d\n",count);
}

