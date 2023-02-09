#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t a = 5;
    int32_t b = 9;
    int32_t count = 0;
    int32_t turn = 0;
    scanf("%d", &turn); // turn 1~100
    int32_t sum[turn];
    for (int32_t i = 0; i < turn; i++)
    {
        sum[i] = 0;
    }
    while (count != turn)
    {
        count++;
        scanf("%d", &a);
        scanf("%d", &b);
        if (a % 2 == 0)
        {
            a++;
        }
        for (int32_t i = a; i <= b; i = i + 2)
        {
            sum[count - 1] += i;
        }
        printf("Case %d: %d\n", count, sum[count - 1]);
    }
    return 0;
}