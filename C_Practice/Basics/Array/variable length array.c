#include<stdio.h>
int main()
{
    int rolls []= {1,2,3,4,5,6,7,8,10,14,17,20};

    int length = sizeof(rolls)/ sizeof(rolls[0]);
    int search_key, i;
    int is_found=-1;

    //user input

    printf("Enter search key: ");
    scanf("%d",&search_key);

    //search
    for(i=0; i<length; i++){
        if(search_key==rolls[i]){
            is_found=i;
            break;
        }
    }
    if(is_found== -1){
        printf("Item not Found!\n");
    }
    else{
        printf("Item found at Index %d\n",is_found);
    }
    return 0;
}