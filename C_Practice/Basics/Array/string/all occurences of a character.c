#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    char str[50],toSearch;
    printf("Enter any string: ");
    gets(str);
    printf("Enter any character to search: ");
    scanf("%c",&toSearch);
    printf("'%c' is found at index -",toSearch);

    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == toSearch){
            printf(" %d,", i);
        }
    }
    return 0;
}
