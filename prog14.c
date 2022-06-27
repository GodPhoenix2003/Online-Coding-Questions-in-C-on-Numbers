 //to add 2 numbers without using arithmetic + operator

 #include <stdio.h>

 void main(){
    int x, y;
    printf("\nEnter the numbers to be added:\n");
    scanf("%d %d", &x, &y);
    int sum = x - ((-1)*y);
    printf("\nSum of %d and %d is: %d\n", x, y, sum);
 }