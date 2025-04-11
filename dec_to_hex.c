#include <stdio.h>
int main(){
    int num[] = {10, 11, 12, 13, 14, 15};
    char hex_char[] = {'A', 'B', 'C', 'D', 'E', 'F'} ;
    int convert = 0;
    for (;!convert;) {
        
        int decimal;
        printf("Enter the decimal number : ");
        scanf("%d", &decimal);

        int hex[32];
        int i;
        for (i = 0; decimal > 0; i++ ){
            hex[i] = decimal % 16;
            decimal /= 16;
        }
        printf("The answer in hexadecimal is : ");
        for(int j = i - 1; j >= 0; j--) {
            int found = 0;
            char ans;
            for (int n = 5; n >= 0 && !found ; n--){
                if (hex[j] >= num[n]){
                    ans = hex_char[n];
                    found = 1;
                }
            }
            if (hex[j] >= 10){
                printf("%c", ans);
            }else {
                printf("%d", hex[j]);
            }
            
        }
        printf("\nDo you want to convert again? 1(Yes), 2(No) : ");
        scanf("%d", &convert);
        convert -= 1;
    }
    return 0;
}