#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t N = 0;
    int32_t count = 0;
    while (scanf("%d", &N) == 1)
    {
        if (N <= -1)
            break;
        int32_t count_paste = 0;
        int32_t R = 0;
        while (N != 0)
        {
            R += N % 2;
            N = N / 2;
            count_paste++;
        }
        if (R == 1)
        {
            count_paste -= 1;
        }
        count++;
        printf("Case %d: %d\n", count, count_paste);
    }
    return 0;
}