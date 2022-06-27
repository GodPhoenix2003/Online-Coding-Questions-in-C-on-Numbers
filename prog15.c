//to check whether a given number is a perfect number or not

#include <stdio.h>

int factoradder(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(n == factoradder(n))
        printf("\n%d is a Perfect Number\n", n);
    else
        printf("\n%d is not a Perfect Number\n", n);
}

int factoradder(int N){
    int sum = 0;
    for(int i = 1; i < N; i++){
        if(N % i == 0)
            sum += i;
        else
            continue;
    }
    return(sum);
}