//to calculate factorial of a number using recursion

#include <stdio.h>

int recurfactorial(int N);

void main(){
    int n;
    printf("\nEnter the number whose factorial is to be calculated: ");
    scanf("%d", &n);
    printf("\nFactoruial of %d is: %d\n", n, recurfactorial(n));
}

int recurfactorial(int N){
    if(N > 0)
        return(N * recurfactorial(N-1));
    else if(N == 0)
        return(1);
}