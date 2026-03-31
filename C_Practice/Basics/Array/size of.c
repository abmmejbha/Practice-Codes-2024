#include<stdio.h>
int main()
{
    int size,nums[size];
    int i,sum=0, avg, max;

    printf("Enter the size of array:");
    scanf("%d", &size);

    printf("Input\n");
    for(i=0; i<size; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Output\n");
    for(i=0; i<size; i++) {
        printf("%d\t",nums[i]);
    }
    printf("\n");

    //sum
    max=nums[0];
    for(i=0; i<size; i++) {
        sum+=nums[i];
        if(max< nums[i]){
            max= nums[i];
        }
    }
    printf("max = %d\n", max);
    printf("Sum= %d\n",sum);
    printf("average = %d", sum/size);
    return 0;
}
