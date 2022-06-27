//to get the greatest among n integers

#include <stdio.h>
#include <stdlib.h>

void main(){
    int n, *a;
    printf("\nEnter the number of numbers to be compared: ");
    scanf("%d", &n);
    a = malloc(n * sizeof(int));
    printf("\nEnter the numbers to be compared:\n");
    for(int i = 0; i < n; i ++)
        scanf("%d", &a[i]);
    for(int i = 0; i < n; i ++){
        for(int j = i + 1; j < n; j ++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
            else
                continue;
        }
    }
    printf("\nGreatest number among the %d numbers is: %d\n", n, a[n - 1]);
}