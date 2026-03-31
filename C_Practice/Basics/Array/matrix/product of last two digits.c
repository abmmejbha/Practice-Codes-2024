#include <stdio.h>
int main()
{
    int num, last_two_d, product = 1;
    scanf("%d", &num);

    last_two_d = num % 100;
    while (last_two_d > 0)
    {
        product *= last_two_d % 10;
        last_two_d /= 10;
    }

    printf("Product of last two digits: %d\n", product);

    return 0;
}
