#include <stdio.h>
int main() {    
        
    int num;    
    scanf("%d", &num);
    if (num % 4 == 0){        
        
    } else if (num % 400 == 0){
       
    } else if (num % 100 != 0){
        printf("Leap Year");
    } else {
        printf("Not a Leap Year");
    }
      
    return 0;
}