#include <stdio.h>
int main() {
    int m, n, sum = 0, i;
    int min, max;
    scanf("%d%d", &m, &n);
    if (m < n) {
        min = m;
        max = n;
    } else {
        max = m;
        min = n;
    }
    for (i = (min + 1); i < max; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);
    return 0;
}
