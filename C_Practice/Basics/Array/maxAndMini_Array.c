#include<stdio.h>
int main()
{
    int scores[5]={89,82,90,86,83};
    
 //find sum of scores
    int sum=0,i;
    for(i=0; i<5; i++)
    {
        sum+=scores[i];         
    }
    printf("sum= %d\n", sum);

//find the average of score

    printf("Average score=%d\n", sum/5);

//find the max value
    int max = scores[0];
    for(i=0; i<5; i++)
    {
        if(scores[i] > max) {
            max=scores[i];
        }
    }
    printf("Max =%d\n",max);

    //find the minimum value
    int mini= scores[0];
    for(i=0; i<5; i++) {
        if(scores[i] < mini) {
            mini=scores[i];
        }
    }
    printf("mini=%d",mini);

    //Find the second minimum value

    return 0;
}
