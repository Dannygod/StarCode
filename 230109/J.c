#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main()
{

    double H = 0;
    double M = 0;
    while (scanf("%lf:%lf", &H, &M) == 2)
    {
        double H_degree = 0;
        double M_degree = 0;
        double result = 0;
        if (H == 0 && M == 0)
            break;
        if (H < 12)
            H_degree = H / 12 * 360 + M * 0.5; // H * 30 + M * 0.5
        else
            H_degree = M * 0.5; // H * 30 + M * 0.5

        M_degree = M / 60 * 360; // M * 6

        if (H_degree > M_degree)
            result = H_degree - M_degree;
        else
            result = M_degree - H_degree;

        if (result > 180)
            result = 360 - result;
        printf("%.3f\n", result);
    }
    return 0;
}