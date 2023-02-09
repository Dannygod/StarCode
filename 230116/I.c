#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t test_case = 0;
    scanf("%d", &test_case);
    printf("\n");
    int32_t N = 1;

    while (test_case != 0)
    {
        test_case--;
        int32_t D = 0;
        int32_t M = 0;
        int32_t Y = 0;
        int32_t D_B = 0; // Born
        int32_t M_B = 0;
        int32_t Y_B = 0;

        scanf("%d/%d/%d %d/%d/%d", &D, &M, &Y, &D_B, &M_B, &Y_B);
        printf("\n");

        if ((Y_B > Y) || ((Y_B == Y) && (M_B > M)) || ((Y_B == Y) && (M_B == M) && (D_B > D))) // invalid date
            printf("Case #%d: Invalid birth date\n", N);
        else if ((Y - Y_B) > 130) // too old
            printf("Case #%d: Check birth date\n", N);
        else // valid dates
        {
            int32_t year_old = 0;
            if (((Y - Y_B == 1) && (M == M_B) && (D_B > D)) || ((Y - Y_B == 1) && (M_B > M)))
                year_old = 0;
            else if ((Y == Y_B) && (M == M_B) && (D == D_B))
                year_old = 0;
            else if (Y > Y_B)
                if ((M_B > M) || ((M_B == M) && (D_B > D)))
                    year_old = Y - Y_B - 1;
                else
                    year_old = Y - Y_B;
            printf("Case #%d: %d\n", N, year_old);
        }
        N++;
    }
    return 0;
}