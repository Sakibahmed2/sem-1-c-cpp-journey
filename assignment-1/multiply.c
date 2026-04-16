// You will be given two integers A and B. You need to give output their multiplication.
#include <stdio.h>

int main()
{

    long long int a = 0;
    long long int b = 0;

    scanf("%lld %lld", &a, &b);

    long long int multiply = a * b;
    printf("%lld", multiply);

    return 0;
}