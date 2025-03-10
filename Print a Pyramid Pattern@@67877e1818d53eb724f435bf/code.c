#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i+=2){
        for(int j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
       
    return 0;
}