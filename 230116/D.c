#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t N = 0;
    // FIND SUM OF ODD
    uint32_t sum_odd[100000] = {0};
    sum_odd[0] = 1;
    uint32_t odd = 5;

    for (int32_t i = 1; i < 100000; i++)
    {
        sum_odd[i] += odd * 3;
        odd = odd + 10 + 4 * (i - 1);
    }

    while (scanf("%d", &N) == 1)
    {
        printf("%u\n", sum_odd[N / 2]);
    }
    return 0;
}
