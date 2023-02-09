#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t test_case = 0;
    scanf("%d", &test_case);
    getchar();
    while (test_case != 0)
    {
        test_case--;
        char a = 0;
        char b = 0;
        char c = 0;
        int32_t num = 0;
        scanf("%c%c%c-%d", &a, &b, &c, &num);
        getchar();
        int32_t value = 0;
        value = (int32_t)(a - 65) * 26 * 26 + (int32_t)(b - 65) * 26 + (int32_t)(c - 65);

        int32_t nice = 0;
        if (value > num)
            nice = value - num;
        else
            nice = num - value;
        if (nice <= 100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
    return 0;
}