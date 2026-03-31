#include<stdio.h>
int main()
{
    char n[30];
    printf("Enter your name:");
    gets(n);
    printf("Full name is = %s\n\n",n);

    int i;
    //for(i=0; i<n; i++)
    //{printf("%c\n",n[i]);}

    while(n[i]!='\0'){printf("%c\n",n[i]); i++;}

    char greetings[] = "Hello World!";
    printf("%c", greetings[0]);
    return 0;
}
