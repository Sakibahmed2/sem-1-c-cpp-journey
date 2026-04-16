#include<stdio.h>
// Header for boolean type
#include<stdbool.h>

int main() {
    printf("Hello world\n");

    int num1 = 1000;
    printf("%d", num1);

    printf("\n");
    
    float f = 2.34;
    printf("%.2f", f);
    
    printf("\n");
    
    char c = 'A';
    printf("%c", c);
    
    printf("\n");
    
    bool b = true;
    printf("%d", b);
    
    printf("\n");
    
    // Data limitation int accept 10^9 
    int a = 100000000000;
    printf("%d", a);
    
    printf("\n");
    
    // Data limitation long long int accept 10^18 
    long long int a2 = 10000000000000;
    printf("%lld", a2);
    
    printf("\n");
    
    
    // Data limitation float 
    float fl = 232343.4532;
    printf("%f", fl);
    
    printf("\n");
    
    // for better use double
    double fl1 = 232343.45323;
    printf("%lf", fl1);
    
    printf("\n");
    
    double fff = 15/4;
    printf("%lf ", fff);


    return 0;
}