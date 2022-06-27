//to convert a decimal number to its equivalent octal form

#include <stdio.h>

void decitooctal(int x);

void main(){
    int n;
    printf("\nEnter the decimal number that is to be converted to its equivalent octal form: ");
    scanf("%d", &n);
    printf("\nOctal Equivalent of %d is: ", n);
    decitooctal(n);
}

void decitooctal(int x){
    int i = 0;
    int octal[100];
    while(x != 0){
        octal[i] = x % 8;
        x = x / 8;
        i++;
    }
    for(int j = (i - 1); j >= 0; j --)
        printf("%d", octal[j]);
}