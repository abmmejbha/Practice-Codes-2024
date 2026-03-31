#include<stdio.h>
int main()
{
    int i,j,temp;
    int num[]={5,2,8,9,4,4,1,8,2,6,6,5,3};
    int length = sizeof(num) / sizeof(num[0]);

    for(i=0; i<length; i++)     
    {
        for(j=0; j<length; j++) 
        {
            if(num[i]<num[j])  
            {
            temp=num[i];
            num[i]=num[j];
            num[j]=temp;
            }
        }
    }
    for(i=0; i<length; i++){
        printf("%d ",num[i]);
        
    }
    return 0;
}