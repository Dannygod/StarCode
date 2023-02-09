#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    char s[1000];
    while (scanf("%[^\n]", s) == 1)
    {
        int32_t letter = 1;
        getchar();
        // size
        int32_t size = 0;
        while (s[size] != '\0')
        {
            size++;
        }
        // printf("size: %d\n", size);
        if (s[0] == ' ' || s[0] == ',')
        {
            letter--;
        }
        for (int32_t i = 0; i < size; i++)
        {

            if ((s[i] == ' ') && (s[i + 1] != '.') && (s[i + 1] != '!') && (s[i + 1] != ' '))
            {
                letter++;
            }
            if (s[i] == ',' && (s[i + 1] != ' '))
            {
                letter++;
            }
        }
        printf("%d\n", letter);
    }
    return 0;
}