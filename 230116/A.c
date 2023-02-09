#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t J = 0; // Players
    int32_t R = 0; // Rounds

    while (scanf("%d %d", &J, &R) == 2)
    {
        int32_t a[R][J];

        for (int32_t i = 0; i < R; i++)
        {
            for (int32_t j = 0; j < J; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }

        int32_t VP[J]; // Victory Points
        for (int32_t i = 0; i < J; i++)
            VP[i] = 0;

        for (int32_t j = 0; j < J; j++)
        {
            for (int32_t i = 0; i < R; i++)
            {
                VP[j] += a[i][j];
            }
        }

        int32_t Index[J]; // SORT
        for (int32_t i = 0; i < J; i++)
            Index[i] = i + 1;

        for (int32_t i = 0; i < J; i++)
        {
            for (int32_t j = 0; j < J - 1; j++)
            {
                if (VP[j] > VP[j + 1])
                {
                    int32_t tem = 0;
                    tem = VP[j];
                    VP[j] = VP[j + 1];
                    VP[j + 1] = tem;

                    tem = Index[j];
                    Index[j] = Index[j + 1];
                    Index[j + 1] = tem;
                }
            }
        }

        printf("%d\n", Index[J - 1]);
        // printf("Index: %d\n", Index[J - 1]);
        // printf("Score: %d\n", VP[J - 1]);
    }
    return 0;
}