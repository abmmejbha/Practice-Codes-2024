#include<stdio.h>
#define MAX_LENGTH 100
int main(void)
{
    system("cls");

    int data[MAX_LENGTH];
    int length=0;
    int value,input,index;

    do
    {
        printf("Menu: \n");
        printf("------------------\n");
        printf("1.Add \n");
        printf("2.Insert \n");
        printf("3.Edit: \n");
        printf("4.Delete: \n");
        printf("5.Display \n");
        printf("6.Clear \n");
        printf("0.Exit \n");
        printf("------------------\n");

        printf("Please select a menu:\n");
        scanf("%d",&input);

        system("cls");
        // printf("------Result------\n");
        // printf("You have selected menu no. %d\n",input);
//switch
        switch(input)
        {
        case 0:
            break;
        //Do nothing
        case 1:
            //Add operation
            printf("Please Enter An Integer Value:\n");
            scanf("%d",&value);

            data[length] = value;
            printf("%d successfully inserted at index %d \n",value,length);
            length++;


            break;
        case 2:
            //Insert Operation
            printf("Please Enter an Integer Value:\n");
            scanf("%d",&value);
            printf("Please Enter an Index between 0 to %d:\n",length);
            scanf("%d",&index);
//moving array elements from right to left
            for(int i=length; i>index; i--){
                data[i]=data[i-1];
            }
//inserting a value at that INDEX
            data[index] = value ;
//making a place by incrementing the the length to insert a value
            length++;
            printf("%d successfully Inserted at Index %d\n",value,index);

            break;
        case 3:
            //Edit operation
            printf("Please Enter an Index between 0 to %d:\n",length-1);
            scanf("%d",&index);
            printf("Please Enter a new Integer Value:\n");
            scanf("%d",&value);
 //updating an array
            data[index] = value;  //This is correct code
           //value = data[index]; this is Incorrect code
            printf(" the Index Updated Successfully!!/n");
            break;

        case 4:
            //delete
            printf("Please Enter an Index for DELETE\n(Between 0 to %d):\n",length-1);
            scanf("%d",&index);

            int dv= data[index];
            for(int i=index; i<length; i++)
            {
                data[i]= data[i+1];
            }
            data[length]=0;
            length--;
            printf("Deleted value %d from Data[%d]",dv,index);

            break;
        case 5:
            //Display items using a for loop
            if(length ==0 )
            {
                printf("There is no Data!!\n");
                break;
            }
            printf("DATA: \n");
            for(int i=0; i<length; i++)
            {
                printf("%d\t",data[i]);
            }
            printf("\n");
            break;

        case 6:
            //clear
            for(int i=0; i<length; i++)
            {
                data[i]=0;
            }
            length=0;
            printf("Data Cleared!!\n");
            break;
        default:
            printf("InVaLiD InPuT!!!\n");
            break;
        }
        printf("\n\n------End :) ------\n\n");
        //system("cls");
    }
    while (input != 0);
    getch();
}
