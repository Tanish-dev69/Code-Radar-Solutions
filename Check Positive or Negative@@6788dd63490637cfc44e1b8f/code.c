#include <stdio.h>
int main() {    
    scanf("%d", &num);    
    int num;    
    if (num > 0){        
        printf("Positive");
    } else if (num < 0){
        printf("Negative");
    } else {
        printf("Zero");
    }
      
    return 0;
}