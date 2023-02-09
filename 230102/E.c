#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
uint32_t f(uint32_t n);
int main()
{
    uint32_t n = 1;
    while (n != 0)
    {
        n = 0;
        scanf("%u", &n);
        uint32_t ans = 0;
        ans = f(n);
        if (n != 0)
            printf("%u\n", ans);
    }
    return 0;
}
uint32_t f(uint32_t n)
{
    if (n / 10 == 0)
        return n;
    else
    {
        n = n / 10 + n % 10;
        return f(n);
    }
}