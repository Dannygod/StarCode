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
        int32_t L = 0;
        scanf("%d", &L);
        int32_t a[L];
        for (int32_t i = 0; i < L; i++)
        {
            a[i] = 0;
            scanf("%d", &a[i]);
        }
        int32_t swap = 0;
        for (int32_t i = 0; i < L; i++)
        {
            for (int32_t j = 0; j < L - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    swap++;
                    int32_t tem = 0;
                    tem = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tem;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n", swap);
    }
    return 0;
}