#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int32_t turn = 0;
    int32_t count = 0;

    scanf("%d", &turn);
    while (turn != 0)
    {
        count++;
        turn--;
        int32_t size = 0;
        scanf("%d", &size);
        int32_t N[size];
        for (int32_t i = 0; i < size; i++)
        {
            N[i] = 0;
            scanf("%d", &N[i]);
        }
        int32_t high_jump = 0;
        int32_t low_jump = 0;
        for (int32_t i = 0; i < size - 1; i++)
        {
            if (N[i + 1] > N[i])
            {
                high_jump++;
            }
            else if (N[i + 1] < N[i])

            {
                low_jump++;
            }
        }
        printf("Case %d: %d %d\n", count, high_jump, low_jump);
    }
    return 0;
}
