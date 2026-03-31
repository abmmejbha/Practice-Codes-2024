#include<stdio.h>
int main()
{
    int num[]= {10, 34,53, 64, 3,8,76};
    int value,i,pos=-1;
    printf("Enter the num for search :\n");
    scanf("%d",&value);
    for(i=0; i<8; i++)
    {
        if(value==num[i]){
            pos=i+1;
            break;
        }
    if(pos==-1){
        printf("Number not found!\n");
    }
    else{
        printf("Number found at %d position!\n",pos);
    }
    return 0;
}