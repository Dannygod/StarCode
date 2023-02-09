#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t n = 0;
    int32_t m = 0;
    while (scanf("%d %d", &n, &m) == 2)
    {
        int32_t size = 0;
        int32_t a[100] = {0};

        a[0] = n;

        if ((n <= 1 | m <= 1))
            printf("Boring!\n");
        else
        {
            for (int32_t i = 1; i < 100; i++)
            {
                if (a[i - 1] % m == 0)
                {
                    a[i] = a[i - 1] / m;
                }
                else
                {
                    break;
                }
                size++;
            }
            // printf("%d\n", size);
            if (a[size] == 1)
            {
                for (int32_t i = 0; i < size + 1; i++)
                    if (i < size)
                        printf("%d ", a[i]);
                    else
                        printf("%d\n", a[i]);
            }
            else
            {
                printf("Boring!\n");
            }
        }
    }
    return 0;
}