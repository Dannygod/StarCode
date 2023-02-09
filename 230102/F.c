#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    printf("Lumberjacks:\n");
    int32_t a[10] = {0};
    int32_t ascend[10] = {0};
    int32_t descend[10] = {0};
    int32_t turn = 0;
    scanf("%d", &turn);
    while (turn != 0)
    {
        turn--;
        for (int32_t i = 0; i < 10; i++)
        {
            scanf("%d", &a[i]);
            ascend[i] = a[i];
            descend[i] = a[i];
        }
        // ascend
        for (int32_t i = 0; i < 10; i++)
        {
            for (int32_t j = 0; j < 10 - 1; j++)
            {
                if (ascend[j] > ascend[j + 1])
                {
                    int32_t tem = 0;
                    tem = ascend[j];
                    ascend[j] = ascend[j + 1];
                    ascend[j + 1] = tem;
                }
            }
        }
        // descend
        for (int32_t i = 0; i < 10; i++)
        {
            for (int32_t j = 0; j < 10 - 1; j++)
            {
                if (descend[j] < descend[j + 1])
                {
                    int32_t tem = 0;
                    tem = descend[j];
                    descend[j] = descend[j + 1];
                    descend[j + 1] = tem;
                }
            }
        }
        int32_t count1 = 0;
        for (int32_t i = 0; i < 10; i++)
        {
            if (a[i] == ascend[i])
            {
                count1++;
            }
        }
        int32_t count2 = 0;
        for (int32_t i = 0; i < 10; i++)
        {
            if (a[i] == descend[i])
            {
                count2++;
            }
        }
        /*
        for (int32_t i = 0; i < 10; i++)
            printf("%d ", a[i]);
        printf("\n");
        for (int32_t i = 0; i < 10; i++)
            printf("%d ", ascend[i]);
        printf("\n");
        for (int32_t i = 0; i < 10; i++)
            printf("%d ", descend[i]);
        printf("\n");
        */
        if (count1 == 10 | count2 == 10)
            printf("Ordered\n");
        else
            printf("Unordered\n");
    }
    return 0;
}