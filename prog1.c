//reversing an integer

#include <stdio.h>

void main(){
    int n, rev=0, dup;
    printf("\nEnter the number to be reversed: ");
    scanf("%d", &n);
    dup = n;
    while(dup>0){
        rev = (rev*10) + (dup%10);
        dup = dup/10;
    }
    printf("\nOriginal Number: %d\n", n);
    printf("\nReversed Number: %d\n", rev);
}