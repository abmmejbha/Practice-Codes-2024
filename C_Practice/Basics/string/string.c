#include<stdio.h>
#include<ctype.h>

int isVowel(char letter)
{
    return (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
}

int main()
{
    char text[100];

    printf("Enter a text:");
    fgets(text, sizeof(text), stdin);

    printf("Text = %s\n",text);

    int spaces=0,vowels=0,numbers=0;
    for(int i=0; text[i] !='\0' ;  i++)
    {
        //convert lowercase
        text[i]= tolower(text[i]);

        //checking vowel using function
        if(isVowel(text[i]))
        {
            vowels++;
        }
        
        if(text[i] == ' ')
        spaces++;

        if(text[i] == '0' <= '9')
        numbers++;
    }
    printf("spaces = %d\n",spaces);
    printf("vowels = %d\n",vowels);
    printf("numbers = %d\n",numbers);


    return 0;
}