#include <stdio.h>

int main()
{
    float C;
    scanf("%f", &C);

    float K = C + 273;
    float F = (K * 1.8) - 459.4;

    printf("%f C = %f K = %f F\n", C, K, F);

    return 0;
}
