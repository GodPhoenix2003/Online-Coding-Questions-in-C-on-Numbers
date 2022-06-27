//to print the smallest number from a set of numbers

#include <stdio.h>
#include <stdlib.h>

int smallestnumfinder(int *x, int size);

void main(){
    int *a, n;
    printf("\nEnter the number fo numbers to be compared: ");
    scanf("%d", &n);
    printf("\nEnter the numbers to be compared:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    printf("\nSamllest Number from among the entered numbers is: %d\n", smallestnumfinder(a, n));
}

int smallestnumfinder(int *x, int size){
    for(int i = 0; i < size; i ++){
        for(int j = (i + 1); j < size; j ++){
            if(x[i] > x[j]){
                int tmp = x[i];
                x[i] = x[j];
                x[j] = tmp;
            }
            else
                continue;
        }
    }
    return(x[0]);
}