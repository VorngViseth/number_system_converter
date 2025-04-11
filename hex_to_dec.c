#include <stdio.h>
int main(){
    char hex[17];
    int length, decimal = 0;
    printf("Enter the hexadecimal numbers : ");
    scanf("%16s", hex);
    for (length = 0; hex[length] != '\0'; length++ );
    int value = 0, base = 1, i;
    for (i = length - 1; i >= 0; i--){
        if ( hex[i] >= '0' && hex[i] <= '9'){
            value = hex[i] - '0';
        }else if (hex[i] >= 'A' && hex[i] <= 'F'){
            value = hex[i] - 'A' + 10;
        }else {
            printf("Invalid hexadecimal number input !");
            return 1;
        }
        decimal += value * base;
        base *= 16;
    }
    printf("This is the decimal value of the number above : %d", decimal);
    return 0;
}