#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int temp_a = a;
    int temp_b = b;

    int i = 1;
    while (temp_b > temp_a)
    {
        temp_a = temp_a * 3;
        temp_b = temp_b * 2;

        if(temp_a > temp_b){
            break;
        }

        i++;
    }
    
    printf("%d", i);

    return 0;
}