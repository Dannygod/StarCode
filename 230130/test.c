#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int32_t N = 0;
    scanf("%d", &N);
    printf("%d\n", 1);

    for (int32_t i = 2; i < N; i++)
    {
        if (N % i == 0)
        {
            printf("%d\n", i);
        }
    }
    printf("%d\n", N);

    return 0;
}