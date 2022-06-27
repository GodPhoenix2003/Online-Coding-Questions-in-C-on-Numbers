//to calculate the square of a given number

#include <stdio.h>
#include <math.h>

void main(){
    int x;
    printf("\nEnter the number to be squared: ");
    scanf("%d", &x);
    printf("\n%d^2 = %d\n", x, (int)pow(x, 2));
}