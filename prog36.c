// to calculate simple interest with explanation

#include <stdio.h>

float simpleinterest(int P, float R, int T);

void main(){
    int p, t;
    float r;
    printf("\nEnter the Principle Amount: ");
    scanf("%d", &p);
    printf("\nEnter the Rate of Interest: ");
    scanf("%f", &r);
    printf("\nEnter the Time(in years): ");
    scanf("%d", &t);
    printf("\nSimple Interest = %1.3f\n", simpleinterest(p, r, t));
}

float simpleinterest(int P, float R, int T){
    return((P * R * T) / 100);
}