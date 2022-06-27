//to calculate the power using POW function

#include <stdio.h>
#include <math.h>

void main(){
    int b, p;
    printf("\nEnter the base: ");
    scanf("%d", &b);
    printf("\nEnter the power: ");
    scanf("%d", &p);
    printf("\n%d^%d = %d\n", b, p, (int)pow(b, p));
}