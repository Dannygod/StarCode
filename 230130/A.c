#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
void inverse(char s[], int32_t division, int32_t size, int32_t now, int32_t group);

int main()
{
    char s[101];
    int32_t group = 1;

    while (scanf("%d", &group) == 1)
    {
        if (group == 0)
            break;
        scanf("%s", s);
        int32_t size = 0;
        while (s[size] != '\0')
        {
            size++;
        }
        // printf("%d\n", size);

        int32_t division = size / group;

        int32_t now = 0;

        for (int32_t i = 1; i <= group; i++)
        {
            inverse(s, division, size, now, i);
            now = now + division;
        }
        printf("%s\n", s);
    }
    return 0;
}
void inverse(char s[], int32_t division, int32_t size, int32_t now, int32_t group)
{
    for (int32_t i = now; i < (division / 2) + now; i++)
    {
        int32_t tem = 0;
        tem = s[i];
        s[i] = s[division * group - i - 1 + now];
        s[division * group - i - 1 + now] = tem;
    }
    return;
}