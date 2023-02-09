#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t v = 0;
    int32_t t = 0;
    int32_t d = 0;
    while (scanf("%d %d", &v, &t) == 2)
    {
        d = v * 2 * t;
        printf("%d\n", d);
        v = 0;
        t = 0;
        d = 0;
    }
    return 0;
}