#include<stdio.h>
int main()
{
     int n;
     printf("Enter the n:");
     scanf("%d",&n);
     int numbers[5];
// array index input
     printf("Enter the value of index:\n");
     for(int index=0; index<n; index++){
        printf("Array[%d]=",index);
        scanf("%d",&numbers[index]);
     }
//array index output
    int sum=0;
    printf("\nthe array is= {");
    for(int index=0; index<5; index++){
        printf("%d, ", numbers[index]);
        sum+=numbers[index];
     }
     printf("}\n");
//finding sum
     printf("summation is= %d\n",sum);
//finding average
     float average =(float) sum/5;
     printf("average is= %.2f\n", average);
//finding maximum
     int index,minimum;
     int mini=numbers[0];
     int max=numbers[0];
     for(index=1; index<5; index++){
        if(max<numbers[index]){
        max=numbers[index];
        }
         if(mini>numbers[index]){
        mini=numbers[index];
        }
     }
    printf("maximum is = %d\n",max);
    printf("Minimum is = %d",mini);
     return 0;
}