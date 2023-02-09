#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    int32_t H1 = 21;
    int32_t M1 = 33;
    int32_t H2 = 21;
    int32_t M2 = 10;
    int32_t result = 0;
    while (H1 != 0 | H2 != 0 | M1 != 0 | M2 != 0)
    {
        result = 0;
        scanf("%d %d %d %d", &H1, &M1, &H2, &M2);
        // MIN
        if (M2 >= M1)
        {
            result += M2 - M1;
        }
        else
        {
            result += M2 + 60 - M1;
            if (H2 > 0)
                H2--;
            else
                H2 += 23;
        }
        // HOUR
        if (H2 > H1)
        {
            result += (H2 - H1) * 60;
        }
        else if (H2 < H1)
        {
            H2 += 24;
            result += (H2 - H1) * 60;
        }
        if (H1 == 0 && H2 == 0 && M1 == 0 && M2 == 0)
        {
        }
        else
            printf("%d\n", result);
    }
    return 0;
}