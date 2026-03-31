#include<stdio.h>
int main()
{
    int last,num,first;

    printf("Enter any numbers:\n");
    scanf("%d",&num);
    last= num%10;
    first = num;
    for(; num>=10 ; num/=10)
    {
        first = first /10;
    }
    printf("First digit = %d\n",first);
    printf("Last digit = %d\n",last);
    printf("sum of first and last digit=%d\n",first+last);

    //swap
    int la;
    la=first;
    first=last;
    last=la;
    printf("first = %d\n",first);
    printf("last = %d\n",last);


}
