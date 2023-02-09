#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

void print_arr(int32_t a[], int32_t size);
void ducci_sequence(int32_t a[], int32_t b[], int32_t size);

int main()
{
    int32_t test_case = 0;
    scanf("%d", &test_case);
    while (test_case != 0)
    {
        test_case--;
        int32_t n = 0;
        scanf("%d", &n);
        int32_t a[1000][n];
        // Initialize
        for (int32_t i = 0; i < 1000; i++)
        {
            for (int32_t j = 0; j < n; j++)
            {
                a[i][j] = -1;
            }
        }

        for (int32_t j = 0; j < n; j++)
            scanf("%d", &a[0][j]);
        int32_t loop = 0;
        int32_t count = 0;
        for (int32_t i = 0; i < 1000 - 1; i++)
        {
            ducci_sequence(&a[i][0], &a[i + 1][0], n);
            // CHECK
            count = 0;
            for (int32_t j = 0; j < n; j++)
            {
                if (a[i + 1][j] == 0)
                {
                    count++;
                }
            }
            if (count == n)
                break;
        }
        loop++;
        if (count == n)
        {
            printf("ZERO\n");
        }
        else if (loop > 0)
        {
            printf("LOOP\n");
        }
    }
    return 0;
}
void ducci_sequence(int32_t *a_ptr, int32_t *b_ptr, int32_t size)
{
    for (int32_t i = 0; i < size - 1; i++)
    {
        if (*(a_ptr + i) > *(a_ptr + i + 1))
            *(b_ptr + i) = *(a_ptr + i) - *(a_ptr + i + 1);
        else
            *(b_ptr + i) = *(a_ptr + i + 1) - *(a_ptr + i);
    }
    if (*(a_ptr + size - 1) > *a_ptr)
        *(b_ptr + size - 1) = *(a_ptr + size - 1) - *a_ptr;
    else
        *(b_ptr + size - 1) = *a_ptr - *(a_ptr + size - 1);
    // print_arr(b_ptr, size);
    return;
}

void print_arr(int32_t a[], int32_t size)
{
    for (int32_t i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}