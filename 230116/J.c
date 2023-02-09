#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{

    int32_t r[100][100] = {0};
    int32_t c[100][100] = {0};
    for (int32_t i = 0; i < 100; i++)
    {
        for (int32_t j = 0; j < 100; j++)
        {
            r[i][j] = i + 1;
            c[i][j] = j + 1;
        }
    }

    int32_t sum[100] = {0};
    sum[0] = 1;
    for (int32_t i = 1; i < 100; i++)
    {
        sum[i] = sum[i - 1] + i + 1;
    }

    int32_t N = 0;
    scanf("%d", &N);
    for (int32_t i = 0; i < 100; i++)
    {
        if (N <= sum[i])
        {
            i
        }
    }

    printf("TERM %d IS %d/%d\n", N, r[0][1], c[0][1]);
    return 0;
}