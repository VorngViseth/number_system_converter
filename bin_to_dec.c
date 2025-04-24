#include <stdio.h>
int main() {
    int binary;
    printf("Enter the binary numbers : ");
    scanf("%d", &binary);  
    int decimals = 0, binary_val , number, remainder = 0, base = 1;
    number = binary;
    for(;number > 0;){
        remainder = number % 10;
        number = number / 10 ;
        decimals += remainder * base;
        base = base * 2;
    }
    printf("This is the result in decimals : %d\n", decimals);    
    
    return 0;
}