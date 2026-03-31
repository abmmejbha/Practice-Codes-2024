#include<stdio.h>
int main()
{
    int i,j,k,row=5,space=row-1,star=1;
    for(i=1; i<row *2; i++)
    {
        for(j=1; j<=space; j++)
        {
            printf(" ");
        }
        for(k=1; k<star*2; k++)
        {
            printf("*");
        }
        printf("\n");

        if(i<row)
        {
            space--;
            star++;
        }
        else
        {
            space++;
            star--;
        }
    }
return 0;
}
