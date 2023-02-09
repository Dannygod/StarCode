#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int32_t digit_sum(int32_t N);
int main()
{
    int32_t test_case = 0;
    scanf("%d", &test_case);
    while (test_case != 0)
    {
        test_case--;
        int32_t N = 0;

        int32_t generator = 0;
        scanf("%d", &N);

        for (int32_t i = 1; i <= N; i++)
        {
            if ((i + digit_sum(i)) == N)
            {
                generator = i;
                break;
            }
        }
        printf("%d\n", generator);
    }
    return 0;
}

int32_t digit_sum(int32_t N)
{
    int32_t digit = 0;
    int32_t sum = 0;

    for (int32_t i = 0; i < 6; i++)
    {
        digit++;
        sum += N % 10;
        if (N / 10 == 0)
            break;
        N = N / 10;
    }

    return sum;
}