#include <stdio.h>

int main()
{
    double x, p;
    scanf("%lf %lf", &x, &p);
    double original = (p * 100) / (100 - x);
    printf("%.2lf", original);

    return 0;
}