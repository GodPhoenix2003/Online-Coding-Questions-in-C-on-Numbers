//to calculate the average of numbers with explantions

#include <stdio.h>
#include <stdlib.h>

float avgcalculator(float *b, int N);

void main(){
    int n;
    float *a;
    printf("\nEnter the number of numbers of which the average is to be calculated: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(float));
    printf("\nEnter the numners:\n");
    for(int i = 0; i < n; i ++)
        scanf("%f", &a[i]);
    printf("\nTo calculate the average of a set of numbers, one need to add the numbers up and divide them with the number of numbers given.\n");
    printf("\nAverage = %1.3f\n", avgcalculator(a, n));
}

float avgcalculator(float *b, int N){
    float avg = 0;
    for(int i = 0; i < N; i ++)
        avg = avg + (b[i]/N);
    return(avg);
}