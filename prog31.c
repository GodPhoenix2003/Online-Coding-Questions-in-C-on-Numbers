//to convert a decimal number to its binary equivalent

#include <stdio.h>
#include <stdlib.h>

int *decitobinary(int x);

void main(){
    int n;
    printf("\nEnter the decimal number to be converted to binary: ");
    scanf("%d", &n);
    int *bin = decitobinary(n);
    printf("\nDecimal equivalent of %d is: ", n);
    for(int i = 0; i < 16; i ++){
        if(i == 4 || i == 8 || i ==12)
            printf(" ");
        printf("%d", bin[i]);
    }
    free(bin);
}

int *decitobinary(int x){
    int *binary = malloc(16 * sizeof(int));
    for(int i = 0; i < 16; i ++)
        binary[i] = 0;
    for(int i = 15; i >= 0; i --){
        binary[i] = x % 2;
        x = x / 2;
    }
    return(binary);
}