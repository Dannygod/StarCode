#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int32_t inverse(int32_t N);

int main()
{
    int32_t N = 0;

    while (scanf("%d", &N) == 1)
    {
        int32_t R = 0;
        R = inverse(N);
        // printf("R: %d\n", R);
        int32_t prime = 0;
        int32_t prime_R = 0;
        for (int32_t i = 2; i < N; i++)
        {
            if (N % i == 0)
            {
                prime++;
                break;
            }
        }
        for (int32_t i = 2; i < R; i++)
        {
            if (R % i == 0)
            {
                prime_R++;
                break;
            }
        }

        if (prime != 0)
            printf("%d is not prime.\n", N);
        else if (N == R | prime_R != 0)
            printf("%d is prime.\n", N);
        else
            printf("%d is emirp.\n", N);
    }
    return 0;
}

int32_t inverse(int32_t N)
{
    int32_t digit = 0;
    int32_t tem = 0;
    tem = N;
    for (int32_t i = 0; i < 10; i++)
    {
        digit++;
        if (N / 10 == 0)
            break;
        N = N / 10;
    }
    N = tem;
    int32_t a[digit];
    //    printf("%d\n", digit);
    for (int32_t i = 0; i < digit; i++)
    {
        a[i] = N % 10;
        N = N / 10;
        // printf("%d ", a[i]);
    }
    int32_t R = 0;
    int32_t ten_n = 1;
    for (int32_t i = digit - 1; i >= 0; i--)
    {
        R += a[i] * ten_n;
        ten_n = ten_n * 10;
    }
    return R;
}