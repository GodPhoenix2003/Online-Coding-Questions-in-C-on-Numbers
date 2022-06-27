//to check whether a number is palindrome or not using iterations

#include <stdio.h>

int reversal(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(n == reversal(n))
        printf("\n%d is a Palindrome Number\n", n);
    else
        printf("\n%d is not a Palindrome Number\n", n);
}

int reversal(int N){
    int rev=0;
    while(N > 0){
        rev = (rev*10) + (N % 10);
        N = N / 10;
    }
    return(rev);
}