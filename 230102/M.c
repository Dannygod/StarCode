#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t test_case = 0;
    scanf("%d", &test_case);
    while (test_case != 0)
    {
        test_case--;
        int32_t e = 0;
        int32_t f = 0;
        int32_t c = 0;
        int32_t total = 0;
        int32_t sum = 0;
        int32_t remain = 0;

        scanf("%d %d %d", &e, &f, &c);
        total = e + f;

        while (total != 0)
        {
            total += remain;
            remain = total % c;
            sum += total / c;
            total = total / c;
        }
        printf("%d\n", sum);
    }
    return 0;
}