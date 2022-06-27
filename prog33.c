//to check whether a given year is a leap year or not

#include <stdio.h>

int leapyear(int YEAR);

void main(){
    int year;
    printf("\nEnter the year to be checked: ");
    scanf("%d", &year);
    if(leapyear(year) == 1)
        printf("\n%d is a Leap Year\n", year);
    else
        printf("\n%d is not a Leap Year\n", year);
}

int leapyear(int YEAR){
    if(YEAR % 4 == 0)
        return(1);
    else
        return(0);
}