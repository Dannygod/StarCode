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
        int32_t b[size - 1];
        for (int32_t i = 0; i < size; i++)
        {
            a[i] = 0;
            scanf("%d", &a[i]);
        }
        for (int32_t i = 0; i < size - 1; i++)
            b[i] = 0;

        for (int32_t i = 1; i < size; i++)
        {
            int32_t sum = 0;
            for (int32_t j = 0; j < i; j++)
            {
                if (a[i] >= a[j])
                {
                    sum++;
                }
            }
            b[i - 1] = sum;
        }
        // sum of B
        int32_t count = 0;
        for (int32_t i = 0; i < size - 1; i++)
        {
            count += b[i];
        }
        printf("%d\n", count);
    }
    return 0;
}