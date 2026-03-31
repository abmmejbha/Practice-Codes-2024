#include <stdio.h>

int main() {
    int num; // Starting point (you can change this value)
    printf("Enter the number to print n:");
    scanf("%d",&num);
    while (num >= 1) {
        printf("%d\n", num);
        num--;
    }
    return 0;
}
