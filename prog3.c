//checking whether a given number is a prime number or not

#include <stdio.h>

int primecheck(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(primecheck(n) == 1)
        printf("\n%d is a Prime Number\n", n);
    else
         printf("\n%d is not a Prime Number\n", n);
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