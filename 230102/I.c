#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void f(int32_t a, int32_t b);
int32_t div_x = 0;
int32_t div_y = 0;

int main()
{
    int32_t K = 0;
    while (scanf("%d", &K) == 1)
    {
        scanf("%d %d", &div_x, &div_y);
        int32_t a = 0;
        int32_t b = 0;
        for (int32_t i = 0; i < K; i++)
        {
            scanf("%d %d", &a, &b);
            f(a, b);
        }
    }
    return 0;
}

void f(int32_t a, int32_t b)
{
    if (a == div_x | b == div_y)
        printf("divisa\n");
    else if (a > div_x && b > div_y)
        printf("NE\n");
    else if (a < div_x && b > div_y)
        printf("NO\n");
    else if (a < div_x && b < div_y)
        printf("SO\n");
    else if (a > div_x && b < div_y)
        printf("SE\n");
    return;
}
