#include<stdio.h>
int main(){
    int n = 5;
    for(int i=1;i<=n;i++){
        int num = i%2;
        for(int j=1;j<=i;j++){
          printf("%d ",num);
          num = num-1;
        }
        printf("\n");
    }
    return 0;
}