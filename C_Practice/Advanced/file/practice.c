#include<stdio.h>
#include<conio.h>
#include<string.h>

void addContact()
{
    char name[50];
    int phone;
    char email[50];

    FILE *fileSample;
    fileSample=fopen("list.txt","a");

    //Taking input
    printf("Enter the name:\n");
    fgets(name,sizeof name,stdin);
    printf("Enter the name:\n");
    fgets(phone,sizeof phone,stdin);
    printf("Enter the name:\n");
    fgets(email,sizeof email,stdin);

    //writing to the existing file
    fprintf(fileSample,"%s%s%s\n", name,phone,email);

    fclose(fileSample);

}

void displayList()
{
    
}