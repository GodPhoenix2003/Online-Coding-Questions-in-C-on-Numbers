//to calculate the LCM of n numbers

#include <stdio.h>
#include <stdlib.h>

int gcd(int x, int y);
int lcm(int *a, int size);

void main(){
    int *arr, n;
    printf("\nEnter the number of numbers of which the LCM is to be calculated: ");
    scanf("%d", &n);
    arr = malloc(n * sizeof(int));
    printf("\nEnter the numbers whose LCM is to be calculated:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &arr[i]);
    printf("\nLCM = %d\n", lcm(arr, n));
}

int gcd(int x, int y){
    if(y == 0)
        return(x);
    return(gcd(y, (x % y)));
}

int lcm(int *a, int size){
    int LCM = a[0], GCD = a[0];
    for(int  i = 1; i < size; i ++){
        GCD = gcd(a[i], LCM);
        LCM = ((LCM * a[i]) / GCD);
    }
    return(LCM);
}