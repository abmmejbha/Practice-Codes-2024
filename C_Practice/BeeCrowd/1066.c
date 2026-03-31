#include <stdio.h>
int main()
{
    int i, even=0,odd=0,positive=0,negative=0;
    int array[5];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] %2== 0)
        {
            even++;
        }
        if (array[i] %2!= 0)
        {
            odd++;
        }
        if (array[i] > 0 )
        {
            positive++;
        }
        if (array[i] < 0)
        {
            negative++;
        }
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(es)\n", positive);
    printf("%d valor(es) negativo(es)\n", negative);
    return 0;
}
