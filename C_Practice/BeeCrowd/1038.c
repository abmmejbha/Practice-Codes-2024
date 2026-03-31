#include <stdio.h>
int main()
{
    int m, n;
    float price = 0;
    scanf("%d %d", &m, &n);
    if (m == 1) {
        price = 4.00 * n;
    } else if (m == 2) {
        price = 4.50 * n;
    } else if (m == 3) {
        price = 5.00 * n;
    } else if (m == 4) {
        price = 2.00 * n;
    } else if (m == 5) {
        price = 1.50 * n;
    }
    printf("Total: R$ %.2f\n", price);
    return 0;
}
