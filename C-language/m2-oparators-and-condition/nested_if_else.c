#include<stdio.h>

int main(){


    int tk;
    scanf("%d", &tk);

    if(tk >= 5000){
        printf("Cox bazar jaboo!\n");
        if(tk >= 10000){
            printf("Saint martin jaboo!\n");
        } else{
            printf("Saint martin jaboo na!\n");
        }
    } else{
        printf("Khutaw jaboo na!");
    }

    return 0;
}