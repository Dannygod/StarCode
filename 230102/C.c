#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{
    int32_t input = 0;
    scanf("%d", &input);
    int32_t M = 3;
    int32_t D = 25;

    while (input != 0)
    {
        int32_t doomdays = 0;
        int32_t weekend = 0;
        input--;
        scanf("%d %d", &M, &D);
        switch (M)
        {
        case 1:
            doomdays = 10;
            break;
        case 2:
            doomdays = 21;
            break;
        case 3:
            M--;
            D += 28;
            doomdays = 21;
            break;
        case 4:
            doomdays = 4;
            break;
        case 5:
            doomdays = 9;
            break;
        case 6:
            doomdays = 6;
            break;
        case 7:
            doomdays = 11;
            break;
        case 8:
            doomdays = 8;
            break;
        case 9:
            doomdays = 5;
            break;
        case 10:
            doomdays = 10;
            break;
        case 11:
            doomdays = 7;
            break;
        case 12:
            doomdays = 12;
            break;
        default:
            break;
        }
        if (D >= doomdays)
        {
            weekend = (D - doomdays) % 7 + 1;
        }
        else
        {
            if ((doomdays - D) % 7 == 0)
            {
                weekend = 1;
            }
            else
                weekend = 7 - ((doomdays - D) % 7) + 1;
        }
        // printf("%d", weekend);
        switch (weekend)
        {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            break;
        }
    }
    return 0;
}