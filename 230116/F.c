#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int32_t GCD(int32_t n, int32_t m);
int main()
{
    int32_t N = 0;
    scanf("%d", &N);
    int32_t G = 0;
    for (int32_t i = 1; i < N; i++)
    {
        for (int32_t j = i + 1; j <= N; j++)
        {
            G += GCD(i, j);
        }
    }
    printf("%d \n", G);
    return 0;
}

int32_t GCD(int32_t n, int32_t m)
{
    int32_t tem = 1;
    int32_t result = 0;
    int32_t small = 0;
    if (n < m)
        small = n;
    else
        small = m;
    while (tem != small + 1)
    {
        if (((n % tem) == 0) && ((m % tem) == 0))
        {
            result = tem;
        }
        tem++;
    }
    return result;
}