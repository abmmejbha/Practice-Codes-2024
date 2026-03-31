#include<stdio.h>
int main()
{
    char str[10]="You have to do";
    puts(str);
    char *lol=str;
    lol++;
    printf("%s\n",lol);
    str[10]='\0';
    ++lol;
    printf("%s|%s\n",lol++,str);
    getch ();
}
