#include <stdio.h>
int main(){
    int decimal;
    printf("Enter the decimal number : ");
    scanf("%d", &decimal);
    int binary[32];
    int i;
    for (i = 0; decimal > 0; i++ ){
        binary[i] = decimal % 2;
        decimal /= 2;
    }
    for(int j = i - 1 ; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    return 0;
}