#include<stdio.h>
int main(){
    int n = 3;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n-1;j++){
          printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",k);
        }
        for(int l=1;l<=i;l++){
            printf("%d",l);
        }
        printf("\n");
    }
    return 0;
}