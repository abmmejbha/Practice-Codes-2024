#include <stdio.h>

int main() {
    int notes, aux;
    scanf("%d", &notes);
    printf("%d\n", notes);

    int denominations[] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        printf("%d nota(s) de R$ %d,00\n", notes / denominations[i], denominations[i]);
        notes %= denominations[i];
    }

    return 0;
}
