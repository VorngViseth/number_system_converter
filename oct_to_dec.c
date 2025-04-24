#include <stdio.h>
int main() {
    int octal;
    printf("Enter the octal numbers : ");
    scanf("%d", &octal);
    int decimals = 0, binary_val , number, remainder = 0, base = 1;
    number = octal;
    for(;number > 0;){
        remainder = number % 10;
        number = number / 10 ;
        decimals += remainder * base;
        base = base * 8;
    }
    printf("This is the result in decimals : %d\n", decimals);
    return 0;
}