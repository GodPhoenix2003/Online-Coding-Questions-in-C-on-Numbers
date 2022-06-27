//checking whether a given number is an armstrong number or not

#include <stdio.h>
#include <math.h>

int digitcounter(int N);
int armstrongcheck(int N);

void main(){
    int n;
    printf("\nEnter the number to be checked: ");
    scanf("%d", &n);
    if(armstrongcheck(n) == 1)
        printf("\n%d is an Armstrong Number\n", n);
    else
        printf("\n%d is not an Armstrong Number\n", n);
}

int digitcounter(int N){
    int s = 0;
    while(N > 0){
        s++;
        N = N / 10;
    }
    return(s);
}

int armstrongcheck(int N){
    int dup = N, sum = 0;
    int d = digitcounter(N);
    while(dup > 0){
        int x = dup % 10;
        sum = sum + (int)pow(x, d);
        dup = dup / 10;
    }
    if(N == sum)
        return 1;
    else
        return 0;
}