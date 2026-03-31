#include<stdio.h>
int main()
{
    char ch[100];
    printf("Enter a string ");
    gets(ch);
    FILE *filehandling;
    filehandling=fopen("testfile.txt","w");
    if(filehandling==NULL)
        printf("Operation unsuccessful");
    else
    {
        printf("writing file contents: ....");
        fputs(ch,filehandling);
        printf("Operation successful!");

    }
    fclose(filehandling);
    return 0;
}
