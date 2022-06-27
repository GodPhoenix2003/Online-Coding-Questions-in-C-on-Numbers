//to calculate the square-root of a given number

#include <stdio.h>
#include <math.h>

void main(){
    int x;
    printf("\nEnter the number to be square-rooted: ");
    scanf("%d", &x);
    printf("\n%d^(1/2) = %1.3f\n", x, pow(x, 0.5));
}