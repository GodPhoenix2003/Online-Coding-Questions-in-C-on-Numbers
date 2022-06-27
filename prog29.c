//to calculate the GCD/HCF of n numbers

#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
int ngcd(int *a, int size);

void main(){
    int *arr, n;
    printf("\nEnter the number of numbers of which the HCF/GCD is to be calculated: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    printf("\nGCD/HCF of the numbers entered is: %d\n", ngcd(arr, n));
}

int gcd(int x, int y){
    if(y == 0)
        return(x);
    return(gcd(y, (x % y)));
}

int ngcd(int *a, int size){
    int result = a[0];
    for(int i = 1; i < size; i ++){
        result = gcd(a[i], result);
        if(result == 1)
            return(1);
    }
    return(result);
}