// You will be given a non-negative integer N, you need to tell if this number is divisible by 3 or not. If it is divisible by 3 output "YES" otherwise output "NO" without the quotation mark.

#include<stdio.h>

int main(){

    int n = 0;
    scanf("%d", &n);

    if(n % 3 == 0){
        printf("YES");
    } else{
        printf("NO");
    }

    return 0;
}