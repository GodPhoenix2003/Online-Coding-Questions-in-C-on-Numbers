//to calculate the sum of digits of a number using recursion

#include <stdio.h>

int digitadder(int N, int sum);

void main(){
    int n;
    printf("\nEnter the number whose digits are to be added: ");
    scanf("%d", &n);
    printf("\nSum of the digits of %d is: %d\n", n, digitadder(n, 0));
}

int digitadder(int N, int sum){
    if(N == 0)
        return(sum);
    sum += (N % 10);
    digitadder((N / 10), sum);
}