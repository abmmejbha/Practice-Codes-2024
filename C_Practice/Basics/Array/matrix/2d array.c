#include<stdio.h>
int main()
{
    int a[5][2]={{0,0},{2,3},{3,5},{6,5},{8,9},  };
    int i,j;
    for(i=0; i<5; i++)
    {
        for(j=0; j<2; j++)
        {
            printf("a[%d][%d]=%d\n",i,j,a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
