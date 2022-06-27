//to check whether a number is palindrome or not using recursion

#include <stdio.h>

int reversal(int N, int rev);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(n == reversal(n, 0))
        printf("\n%d is a Palindrome Number\n", n);
    else
        printf("\n%d is not a Palindrome Number\n", n);
}

int reversal(int N, int rev){
    if(N == 0)
        return(rev);
    rev *= 10;
    rev += (N % 10);
    N = N / 10;
    return(reversal(N, rev));
}