#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
int main(void)
{
    time_t t;
    srand((unsigned)time(&t));

    int choosen_number, chance=3;
    bool is_loss = true;
    int lucky_number = rand() % 10 + 1;

    while(chance>0){
        printf("Guess the lucky number(%d chances left):",chance);
        scanf("%d",&choosen_number);

        if(lucky_number== choosen_number){
            printf("Congratulation! You have guessed the correct number");
            is_loss=false;
            break;
        }
        chance--;
    }
    if(is_loss){
        printf("You have  lost. Lucky Number is %d\n", lucky_number);
    }

    return 0;
}
