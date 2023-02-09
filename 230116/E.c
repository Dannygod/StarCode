#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    /* Find the lost people */
    int32_t N = 0;
    int32_t R = 0;
    while (scanf("%d %d", &N, &R) == 2)
    {
        int32_t a[N];
        // initialize
        for (int32_t i = 0; i < N; i++)
            a[i] = 10001;

        for (int32_t i = 0; i < R; i++)
        {
            scanf("%d", &a[i]);
        }

        // sort
        for (int32_t i = 0; i < N; i++)
        {
            for (int32_t j = 0; j < N - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int32_t tem = 0;
                    tem = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tem;
                }
            }
        }
        /* print a[i]
        for (int32_t i = 0; i < N; i++)
            printf("%d ", a[i]);
        printf("\n");
        */

        int32_t lost = 1;
        int32_t print_sth = 0;
        int32_t Index = 0;
        for (int32_t i = 0; i < N; i++)
        {
            if (lost < a[Index])
            {
                printf("%d ", lost);
                print_sth++;
                lost++;
            }
            else
            {
                Index++;
                lost++;
            }
        }
        // asterisc (star)
        if (print_sth == 0)
        {
            printf("*\n");
        }
        else
            printf("\n");
    }
    return 0;
}
