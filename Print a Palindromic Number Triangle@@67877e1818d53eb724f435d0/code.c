#include<stdio.h>
int main(){
    int n = 3;
    for(int i=1;i<=n;i++){
        int p=1;
        for(int j=i;j<=n;j++){
          printf(" ");
        }
        for(int k=1;k<i;k++){
            printf("%d",p++);
        }
        for(int l=1;l<=i;l++){
            printf("%d",p++);
        }
        printf("\n");
    }
    return 0;
}