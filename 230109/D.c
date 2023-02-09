#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    char result_s[81];
    int32_t test = 0;
    scanf("%d", &test);
    while (test != 0)
    {
        test--;
        scanf("%s", result_s);
        int32_t score = 0;
        int32_t count = 0;
        int32_t i = 0;
        while (result_s[i] != '\0')
        {
            if (result_s[i] == 'O')
            {
                count++;
                score += count;
            }
            else if (result_s[i] == 'X')
            {
                count = 0;
            }
            i++;
        }
        printf("%d\n", score);
        score = 0;
    }
    return 0;
}