//Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5, IX:9, 
//X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000)
#include <stdio.h>
void main(){
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);
    int i = 1000;
    char roman[50];
    int j = 0;
    while(num >= i) {
        if(num >= i) {
            num = num - i;
            roman[j++] = 'M';
            }
            i = i / 10;
            }
            i = 500;
            while(num >= i) {
                if(num >= i) {
                    num = num - i;
                    roman[j++] = 'D';
                    }
                    i = i / 5;
                    }
                    i = 100;
                    while(num >= i) {
                        if(num >= i) {
                            num = num - i;
                            roman[j++] = 'C';
                            }
                            i = i / 10;
                            }
                            i = 50;
                            while(num >= i) {
                                if(num >= i) {
                                    num = num - i;
                                    roman[j++] = 'L';
                                    }
                                    i = i / 5;
                                    }
                                    i = 10;
                                    while(num >= i) {
                                        if(num >= i) {
                                            num = num - i;
                                            roman[j++] = 'X';
                                            }
                                            i = i / 10;
                                            
}
}