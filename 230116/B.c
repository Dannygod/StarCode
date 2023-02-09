#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    char s[10000];
    scanf("%s", s);
    int32_t size = 0;
    int32_t I = 0;

    while (s[I] != '\0')
    {
        printf("%c", s[I] - 7);
        I++;
    }
    printf("\n");
    //    printf("size: %ld\n", sizeof(s));
    return 0;
}