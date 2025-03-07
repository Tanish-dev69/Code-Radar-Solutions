#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a <= 18){
        printf("Not Eligible");
    } else if (a >= 18) {
        printf("Eligible");
    } else {
        printf("Gay");
    }

    return 0;
}