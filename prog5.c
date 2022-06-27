//generating an integer fibonacci series using recursion

#include <stdio.h>

void fiboseries(int N);

void main(){
    int n;
    printf("\nEnter the number of terms: ");
    scanf("%d", &n);
    printf("\nFibonacci Series:-\n");
    printf(" %d, %d", 0, 1);
    fiboseries(n - 2);
}

void fiboseries(int N){
    static int a = 0, b = 1, c;
    if(N > 0){
        c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
        fiboseries(N - 1);
    }
}