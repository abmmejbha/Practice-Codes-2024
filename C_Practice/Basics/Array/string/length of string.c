#include<stdio.h>
int main()
{
    char n[]="ami to obak";
    //int len=strlen(n);

    //printf("length  = %d\n",len);


    int i=0;
    int len=0;
    while(n[i]!= '\0')
    {
        i++;
        len++;
    }
    printf("length = %d",len);
    return 0;
}

