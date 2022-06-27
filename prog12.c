//to swap two numbers using a 3rd variable

#include <stdio.h>

void main(){
    int x, y, temp;
    printf("\nEnter the numbers to be swapped:\n");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swapping:-\nx = %d\t\ty = %d\n", x, y);
    temp = x;
    x = y;
    y = temp;
    printf("\nAfter Swapping:-\nx = %d\t\ty = %d\n", x, y);
}