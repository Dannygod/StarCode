#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t n = 0;
    int32_t turn = 0;
    while (1)
    {
        turn++;
        scanf("%d", &n);
        if (n == 0)
            break;
        int32_t h[n];
        for (int32_t i = 0; i < n; i++)
        {
            scanf("%d", &h[i]);
        }
        int32_t sum = 0;
        int32_t avg = 0;
        for (int32_t i = 0; i < n; i++)
        {
            sum += h[i];
        }
        avg = sum / n;
        // printf("avg: %d\n", avg);
        int32_t h_gap[n];
        for (int32_t i = 0; i < n; i++)
            h_gap[i] = 0;
        for (int32_t i = 0; i < n; i++)
        {
            if (h[i] >= avg)
                h_gap[i] = h[i] - avg;
            else
                h_gap[i] = avg - h[i];
        }
        int32_t move = 0;
        for (int32_t i = 0; i < n; i++)
        {
            // printf("%d ", h_gap[i]);
            move += h_gap[i];
        }
        move /= 2;
        printf("Set #%d\n", turn);
        printf("The minimum number of moves is %d.\n", move);
        printf("\n");
    }

    return 0;
}