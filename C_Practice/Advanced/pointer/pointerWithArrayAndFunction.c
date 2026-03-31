#include<stdio.h>
int main()
{
    int a[5]= {1,2,3,4,5};
    int sum=0;
    for(int i=0; i<5; i++)
    {
        sum+= *(a+i);
        //sum+=a[i];
        printf("%d\t", *(a +i));
    }
    printf("sum=%d\n",sum);

    int b[5] = {1,2,3,4,5};
    int *ptr = &a[3];
    printf("%d\n", *ptr);
    printf("%d\n", *(ptr+1));


    return 0;
}