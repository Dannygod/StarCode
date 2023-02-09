#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int32_t Index = 1;
double duration = 0;

double trans(char c);
void good_or_bad(char s[], int32_t size);

int main()
{
    char s[201];

    while (scanf("%s", s) == 1)
    {
        if (s[0] == '*')
        {
            break;
        }
        int32_t result = 0;
        duration = 0;
        good_or_bad(s, 201);
        result = duration;
        printf("%d\n", result);
    }
    return 0;
}

double trans(char c)
{
    if (c == 'W')
    {
        return 1;
    }
    else if (c == 'H')
    {
        return 0.5;
    }
    else if (c == 'Q')
    {
        return 0.25;
    }
    else if (c == 'E')
    {
        return 0.125;
    }
    else if (c == 'S')
    {
        return 0.0625;
    }
    else if (c == 'T')
    {
        return 0.03125;
    }
    else if (c == 'X')
    {
        return 0.015625;
    }
    else
        return 0;
}

void good_or_bad(char s[], int32_t size)
{
    while (s[Index] != '\0')
    {
        double tem = 0.0;
        while (s[Index] != '/')
        {
            tem += trans(s[Index]);
            Index++;
        }
        Index++;
        if (tem == 1)
            duration += 1;
        else
            duration += 0;
    }
    Index = 1;
    return;
}