//to print the prime numbers in a given range

#include <stdio.h>

int primecheck(int N);

void main(){
    int ll, ul;
    printf("\nEnter the lower limit: ");
    scanf("%d", &ll);
    printf("Enter the upper limit: ");
    scanf("%d", &ul);
    printf("\nPrime numbers in the range of %d to %d (extreme limits inclusive):-\n", ll, ul);
    for(int i = ll; i <= ul; i ++){
        if(primecheck(i) == 1)
            printf("%d  ", i);
        else
            continue;
    }
}

int primecheck(int N){
    int flag = 1;
    for(int i = 2; i <= (N / 2); i ++){
        if(N % i != 0)
            continue;
        else{
            flag = 0;
            break;
        }
    }
    return(flag);
}