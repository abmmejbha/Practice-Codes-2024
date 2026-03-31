#include<stdio.h>
int main()
{
    int i,count=0;
    printf("Enter the num for count digits:");
    scanf("%d",&i);
    for(; i!=0; i=i/10)
    {
        count++;
    }
    printf("%d",count);
    return 0;
}
