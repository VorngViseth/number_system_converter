#include <stdio.h>
int main(){
    int convert = 0;
    for (;!convert;) {
        
        int decimal;
        printf("Enter the decimal number : ");
        scanf("%d", &decimal);

        int octal[32];
        int i;
        for (i = 0; decimal > 0; i++ ){
            octal[i] = decimal % 8;
            decimal /= 8;
        }
        for(int j = i - 1 ; j >= 0; j--) {
            printf("%d", octal[j]);
        }
        printf("\nDo you want to convert again? 1(Yes), 2(No) : ");
        scanf("%d", &convert);
        convert -= 1;
    }
    return 0;
}