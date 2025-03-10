#include<stdio.h>
int main(){
    char op;
    int a,b;
    scanf("%d%d%c",&a,&b,&op);
    if (c== '+') {
        printf("%d",a+b);
    } else if (c== '-'){
         printf("%d",a-b);
    } else if (c== '*'){
         printf("%d",a*b);
    } else if (c== '/'){
         printf("%d",a/b);
    } else {printf("error");}
    return 0;
}