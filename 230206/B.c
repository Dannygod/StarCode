#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t a = 0; // card1.length
    int32_t b = 0; // card2.length
    scanf("%d %d", &a, &b);
    int32_t card1[a];
    int32_t card2[b];
    for (int32_t i = 0; i < a; i++)
    {
        card1[a] = 0;
        scanf("%d", &card1[i]);
    }
    for (int32_t i = 0; i < b; i++)
    {
        card2[b] = 0;
        scanf("%d", &card2[i]);
    }
    // sort

    for (int32_t i = 0; i < a - 1; i++)
    {
        for (int32_t j = 0; j < a - 2; j++)
        {
            if (card1[j] > card1[j + 1])
            {
                int32_t tmp = 0;
                tmp = card1[j];
                card1[j] = card1[j + 1];
                card1[j + 1] = tmp;
            }
        }
    }
    for (int32_t i = 0; i < a; i++)
    {
        printf("%d ", card1[i]);
    }

    return 0;
}