#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int32_t a[10] = {0};
void f(int32_t number);

int main()
{
    int32_t N = 0;
    int32_t tmp = 0;
    int32_t test_case = 0;
    scanf("%d", &test_case);
    while (test_case != 0)
    {
        test_case--;
        scanf("%d", &N);
        while (N != 0)
        {
            tmp = N;
            while (N >= 10)
            {
                f(N % 10);
                N = N / 10;
            }
            f(N);
            N = tmp;
            N--;
        }
        for (int32_t i = 0; i < 10; i++)
        {
            if (i < 9)
                printf("%d ", a[i]);
            else
                printf("%d", a[i]);
            a[i] = 0;
        }
        printf("\n");
    }
    return 0;
}

void f(int32_t number)
{
    if (number == 1)
        a[1]++;
    else if (number == 2)
        a[2]++;
    else if (number == 3)
        a[3]++;
    else if (number == 4)
        a[4]++;
    else if (number == 5)
        a[5]++;
    else if (number == 6)
        a[6]++;
    else if (number == 7)
        a[7]++;
    else if (number == 8)
        a[8]++;
    else if (number == 9)
        a[9]++;
    else if (number == 0)
        a[0]++;
    return;
}
