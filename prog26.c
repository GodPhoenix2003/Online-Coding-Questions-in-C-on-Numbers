//to calculate the cube of a given number

#include <stdio.h>
#include <math.h>

void main(){
    int x;
    printf("\nEnter the number to be cubed: ");
    scanf("%d", &x);
    printf("\n%d^2 = %d\n", x, (int)pow(x, 3));
}