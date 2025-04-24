#include <stdio.h>
int main(){
    int decimal;
    printf("Enter the decimal number : ");
    scanf("%d", &decimal);
    int octal[32];
    int i;
    for (i = 0; decimal > 0; i++ ){
        octal[i] = decimal % 8;
        decimal /= 8;
    }
    printf("The answer is : ");
    for(int j = i - 1 ; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    return 0;
}