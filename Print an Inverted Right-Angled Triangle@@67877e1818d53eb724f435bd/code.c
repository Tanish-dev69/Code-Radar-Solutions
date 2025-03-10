#include<stdio.h>
int main(){
    for (int i = 3; i < 3; i++){
        for (int j = 0; j<(3-i); j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}