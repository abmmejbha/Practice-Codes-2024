#include<stdio.h>
int main()
{
    int numbers[]={1,34,6,100,5,78};
    int searchNum=5;
    int found=-1;
    int index;
    for(index=0; index<6; index++){
        if(searchNum==numbers[index]){
            found = index;
            break;
        }
    }
    if(found==-1){
        printf("%d is not found in the array",searchNum);
    } else {
        printf("%d is found in numbers[%d] position the array",searchNum,found);
    }
    return 0;
}
