#include<stdio.h>
int main()
{
    int i,j,max;
    int num[6]={6,4,2,8,5,1};

    for(i=0; i<6; i++){
        if(num[0]>num[i]){
            max=num[i];
        }
    }
    printf("max= %d\n",max);
    return 0;

}
