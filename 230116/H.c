#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
void cal_MCY(char s[], int32_t *M, int32_t *C, int32_t *Y, int32_t Index);

int main()
{
    int32_t test_case = 0;
    scanf("%d", &test_case);
    while (test_case != 0)
    {
        test_case--;
        int32_t M = 0;
        int32_t Y = 0;
        int32_t C = 0;
        int32_t M_own = 0;
        int32_t Y_own = 0;
        int32_t C_own = 0;

        char s[1000];

        scanf("%d %d %d", &M_own, &Y_own, &C_own);
        scanf("%s", s);
        //  spend
        int32_t Index = 0;
        while (s[Index] != '\0')
        {
            cal_MCY(s, &M, &C, &Y, Index);
            Index++;
        }

        int32_t M_R = 0;
        int32_t Y_R = 0;
        int32_t C_R = 0;

        M_R = M_own - M;
        C_R = C_own - C;
        Y_R = Y_own - Y;
        if (M_R >= 0 && C_R >= 0 && Y_R >= 0)
            printf("YES %d %d %d \n", M_R, C_R, Y_R);
        else
            printf("NO\n");
    }
    return 0;
}

void cal_MCY(char s[], int32_t *M, int32_t *C, int32_t *Y, int32_t Index)
{
    if (s[Index] == 'M')
    {
        (*M)++;
    }
    else if (s[Index] == 'C')
    {
        (*C)++;
    }
    else if (s[Index] == 'Y')
    {
        (*Y)++;
    }
    else if (s[Index] == 'R')
    {
        (*M)++;
        (*Y)++;
    }
    else if (s[Index] == 'G')
    {
        (*C)++;
        (*Y)++;
    }
    else if (s[Index] == 'V')
    {
        (*M)++;
        (*C)++;
    }
    else if (s[Index] == 'B')
    {
        (*M)++;
        (*Y)++;
        (*C)++;
    }
    return;
}
