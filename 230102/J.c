#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    uint32_t num = 1;
    while (num != 0)
    {
        scanf("%u", &num);
        if (num == 0)
            break;
        uint32_t binary[10000] = {0};
        uint32_t sum = 0;
        int32_t size = 0;
        // uint32_t ten_n = 1;
        //  calculate binary
        while (num != 0)
        {
            binary[size] = (num % 2);
            num = num / 2;
            size++;
        }
        // printf("%d\n", size);
        //  calculate sum
        for (int32_t i = 0; i < size; i++)
        {
            sum += binary[i];
        }
        printf("The parity of ");
        for (int32_t i = size - 1; i >= 0; i--)
            printf("%d", binary[i]);
        printf(" is %u (mod 2).\n", sum);
        num = 1;
    }
    return 0;
}