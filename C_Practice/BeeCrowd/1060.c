#include <stdio.h>
int main()
{
    int i, m = 0;
    float array[6];
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &array[i]);
        if (array[i] > 0)
        {
            m++;
        }
    }
    printf("%d valores positivos\n", m);
    printf("%0.2f\n",)
    return 0;
}
