#include<stdio.h>

int main(){

    int tk;
    scanf("%d", &tk);

    if(tk >= 100){
        printf("Burger khaboo!\n");
    } else if(tk >= 50) {
        printf("Futcha khaboo!\n");
    } else {
        printf("Kichu khabo na!");
    }

    return 0;
}