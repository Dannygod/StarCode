#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t test_case = 0;
    scanf("%d", &test_case);
    while (test_case != 0)
    {
        uint32_t a[4] = {0};
        for (int32_t i = 0; i < 4; i++)
        {
            scanf("%u", &a[i]);
        }
        if (a[0] == 0 | a[1] == 0 | a[2] == 0 | a[3] == 0)
            printf("banana\n");
        else if ((a[0] == a[1] && a[1] == a[2] && a[2] == a[3]))
            printf("square\n");
        else if (((a[0] == a[1] && a[2] == a[3]) | (a[0] == a[2] && a[1] == a[3]) | (a[0] == a[3] && a[2] == a[1])))
            printf("rectangle\n");
        else if ((a[0] + a[1] + a[2]) > a[3] && ((a[0] + a[1] + a[3]) > a[3]) && (a[0] + a[3] + a[2]) > a[1] && (a[3] + a[1] + a[2]) > a[0])
            printf("quadrangle\n");
        else
            printf("banana\n");
        test_case--;
    }
    return 0;
}