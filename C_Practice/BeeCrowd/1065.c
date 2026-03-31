#include <stdio.h>
int main()
{
    int i, m = 0;
    int array[5];
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &array[i]);
        if (array[i] %2== 0)
        {
            m++;
        }
    }
    printf("%d valores pares\n", m);
    return 0;
}
