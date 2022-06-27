//to check whether a given number even or or

#include <stdio.h>

int evenoddcheck(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(evenoddcheck(n) == 1)
        printf("\n%d is an Even Number\n", n);
    else
        printf("\n%d is an Odd Number\n", n);
}

int evenoddcheck(int N){
    if (N % 2 == 0)
        return(1);
    else
        return(0);    
}