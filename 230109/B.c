#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{

    int32_t INPUT[4];
    int32_t a[8];
    int32_t b[8];
    int32_t n = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        n--;
        scanf("%d %d %d %d", &INPUT[0], &INPUT[1], &INPUT[2], &INPUT[3]);
        a[0] = INPUT[0] / 1000;
        a[1] = (INPUT[0] / 10) % 10;
        a[2] = INPUT[1] / 1000;
        a[3] = (INPUT[1] / 10) % 10;
        a[4] = INPUT[2] / 1000;
        a[5] = (INPUT[2] / 10) % 10;
        a[6] = INPUT[3] / 1000;
        a[7] = (INPUT[3] / 10) % 10;

        b[0] = (INPUT[0] / 100) % 10;
        b[1] = INPUT[0] % 10;
        b[2] = (INPUT[1] / 100) % 10;
        b[3] = INPUT[1] % 10;
        b[4] = (INPUT[2] / 100) % 10;
        b[5] = INPUT[2] % 10;
        b[6] = (INPUT[3] / 100) % 10;
        b[7] = INPUT[3] % 10;

        int32_t sum_a = 0;
        int32_t sum_b = 0;
        int32_t total = 0;

        for (int32_t i = 0; i < 8; i++)
        {
            a[i] *= 2;
            sum_a += (a[i] % 10) + (a[i] / 10);
            sum_b += b[i];
        }
        total = sum_a + sum_b;
        if (total % 10 == 0)
            printf("Valid\n");
        else
            printf("Invalid\n");
    }
    return 0;
}
