#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[MAX_SIZE];
    int alphabets, digits, others, i;
    alphabets = digits = others = i = 0;
    printf("Enter any string : ");
    gets(str);

    while(str[i]!='\0')
    {
    char l=str[i];
        if((l>='a' && l<='z') || (l>='A' && l<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            others++;
        }
        i++;
    }
    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", others);

    return 0;
}
