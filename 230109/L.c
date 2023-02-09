#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t M_F = 1;
    int32_t N = 0;
    while (scanf("%d", &N) != EOF)
    {
        uint32_t F = 0;
        uint32_t M = 0;

        if (N == -1)
            break;
        for (int32_t i = 0; i < N; i++)
        {
            uint32_t add_M = 0;
            uint32_t add_F = 0;
            add_M = F;
            add_F = M;
            M += add_M;
            F = add_F;
            M++;
        }
        printf("%u %u\n", M, M + F + 1);
    }

    return 0;
}