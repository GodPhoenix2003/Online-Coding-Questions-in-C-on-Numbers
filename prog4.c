//generating an integer fibonacci series using iteration

#include <stdio.h>

void main(){
    int n;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    printf("\nFibonacci Series:-\n");
    int a = 0, b = 1 ,c;
    printf(" %d, %d", a, b);
    for(int i=3; i<=n; i++){
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }
}