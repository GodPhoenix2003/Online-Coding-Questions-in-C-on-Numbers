//to calculate factorial of a number using iterative method

#include <stdio.h>

int factorial(int N);

void main(){
    int n;
    printf("\nEnter the number whose factorial is to be calculated: ");
    scanf("%d", &n);
    printf("\nFactoruial of %d is: %d\n", n, factorial(n));
}

int factorial(int N){
    int facto = 1;
    for(int i = 1; i <= N; i ++)
        facto *= i;
    return(facto);
}