#include <stdio.h>
int main()
{
    int i, m = 0;
    float array[6];
    float average=0;
    for (i = 0; i < 6; i++)
    {
        scanf("%f", &array[i]);
        if (array[i] > 0)
        {
            m++;
            average+=array[i];
        }
    }
    printf("%d valores positivos\n", m);
    printf("%0.1f\n",average/m);
    return 0;
}
