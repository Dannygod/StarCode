#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main()
{
    int32_t a[15000] = {0};
    int32_t count = 2;
    // a[0] = 1;
    for (int32_t i = 0; i < 15000; i++)
    {
        if (i > 0)
            a[i] = i + 1 + a[i - 1];
        else
            a[i] = 1;
        // printf("%d ", a[i]);
    }

    int32_t s = 0;
    while (scanf("%d", &s) == 1)
    {
        if (s == 0)
            break;
        int32_t size = 0;
        for (int32_t i = 0; i < 15000; i++)
        {
            size++;
            if (s < a[i])
            {
                break;
            }
        }
        int32_t num = 0;
        num = a[size - 1] - s;
        printf("%d %d\n", num, size);
    }
    return 0;
}