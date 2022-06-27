//to calculate the power without using POW function

#include <stdio.h>

int power(int x, int y);

void main(){
    int b, p;
    printf("\nEnter the base: ");
    scanf("%d", &b);
    printf("\nEnter the power: ");
    scanf("%d", &p);
    printf("\n%d^%d = %d\n", b, p, power(b, p));
}

int power(int x, int y){
    if(y > 0)
        return(x * power(x, (y - 1)));
    else
        return(1);
}