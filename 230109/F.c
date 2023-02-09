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
        int32_t size = 0;
        scanf("%d", &size);
        int32_t a[size];
        for (int32_t i = 0; i < size; i++)
        {
            a[i] = 0;
            scanf("%d", &a[i]);
        }

        for (int32_t i = 0; i < size; i++)
        {
            for (int32_t j = 0; j < size - 1; j++)
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
        int32_t dis = 0;
        dis = (a[size - 1] - a[0]) * 2;
        printf("%d\n", dis);
    }
    return 0;
}