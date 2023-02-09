#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t height = 0; // Amplitude
    int32_t num = 0;    // Frequency
    int32_t test_case = 1;
    scanf("%d", &test_case);
    // printf("\n");
    while (test_case != 0)
    {
        scanf("%d", &height);
        scanf("%d", &num);
        test_case--;
        int32_t count = 0;
        for (int32_t k = 0; k < num; k++)
        {
            for (int32_t i = 1; i <= height; i++)
            {
                count++;
                for (int32_t j = 0; j < i; j++)
                {
                    printf("%d", count);
                }
                printf("\n");
            }
            for (int32_t i = 1; i < height; i++)
            {
                count--;
                for (int32_t j = 0; j < height - i; j++)
                {
                    printf("%d", count);
                }
                printf("\n");
            }
            if (test_case != 0 || k != num - 1)
                printf("\n");
            count = 0;
        }
    }
    return 0;
}