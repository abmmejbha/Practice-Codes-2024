#include<stdio.h>
int main()
{
    int numbers[]={5,2,8,9,4,4,1,8,2,6,6,5,3};
    int length=sizeof(numbers)/sizeof(numbers[0]);
    int i,j,temp;


    //sorting logic
    for(i=0; i<length; i++) {
        for(j=0; j<length; j++){
            if(numbers[i] < numbers[j]) {
                temp = numbers[i];
                numbers[i]= numbers[j];
                numbers[j]= temp;
            }
        }
    }

    //print array
    for(i=0; i<length; i++) {
        printf("%d  ", numbers[i]);
    }
    printf("\n");
    return 0;
}
