//to get the prime factors of a given integer

#include <stdio.h>

int primecheck(int N);

void main(){
    int n;
    printf("\nEnter the number: ");
    scanf("%d", &n);
    printf("\nPrime Factors of %d:-\n", n);
    for(int i = 1; i <= (n / 2); i ++){
        if(n % i == 0){
            if(primecheck(i) == 1)
                printf("%d  ", i);
            else
                continue;
        }
        else
            continue;
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