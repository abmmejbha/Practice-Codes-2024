#include <stdio.h>

int sum(int *ptr1, int *ptr2)
{
    int sum = *ptr1 + *ptr2;
    printf("sum= %d\n", sum);
}
int main()
{
    int number1 = 30;
    int number2 = 20;

    sum(&number1, &number2);

    printf("Value of number1 = %d\n", number1);
    printf("Address of number1 = %u\n", &number1);
}