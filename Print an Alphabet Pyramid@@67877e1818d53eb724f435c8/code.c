#include<stdio.h>
int main(){
    int n;
    char ch = 'A';
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int k=1;k<=i;k++){
             printf("%c ",ch);
        }
        printf("\n");
    }
    return 0;
}