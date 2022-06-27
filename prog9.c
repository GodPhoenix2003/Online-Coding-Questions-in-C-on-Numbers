//to check if a number is binary

#include <stdio.h>

int binarynumcheck(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(binarynumcheck(n) == 1)
        printf("\n%d is a Binary Number\n", n);
    else
        printf("\n%d is not a Binary Number\n", n);
}

int binarynumcheck(int N){
    int flag = 1;
    while(N > 0){
        if((N % 10) == 1 || (N % 10) == 0){
            N = N / 10;
            continue;
        }
        else{
            flag = 0;
            break;
        }
    }
    return(flag);
}