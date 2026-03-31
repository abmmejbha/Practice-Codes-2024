#include <stdio.h>

int main() {
    double amount;
    scanf("%lf", &amount);

    // Add a small value to the amount to prevent precision issues
    //amount += 0.001;

    int notes[] = {100, 50, 20, 10, 5, 2};
    double coins[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d nota(s) de R$ %.2lf\n", (int)(amount / notes[i]), (double)notes[i]);
        amount = fmod(amount, notes[i]);
    }
    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d moeda(s) de R$ %.2lf\n", (int)(amount / coins[i]), coins[i]);
        amount = fmod(amount, coins[i]);
    }

    return 0;
}
