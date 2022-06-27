//to print 1st n prime numbers with explanation

#include <stdio.h>

int primecheck(int N);

void main(){
    int n, j=2, i = 1;
    printf("\nEnter the number of prime numbers to be displayed: ");
    scanf("%d", &n);
    printf("\n1st %d Prime Numbers are as follows:-\n", n);
    while(i <= n){
        if(primecheck(j) == 1){
            printf("%d  ", j);
            i++;
            j++;
        }
        else
            j++;
    }
}

int primecheck(int N){
    int flag=1;
    for(int i=2; i<=(N/2);i++){
        if(N%i!=0)
            continue;
        else{
            flag=0;
            break;
        }
    }
    return(flag);
}