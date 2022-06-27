// to convert temperature from celsius to fahrenheit and vice versa

#include <stdio.h>

float fc(float F);
float cf(float C);

void main(){
    float f, c;
    int opt;
    printf("\nOption 1: Fahrenheit to Celsius\nOption 2: Celsius to Fahrenheit\nOption 3: Exit\n\nEnter your option number: ");
    scanf("%d", &opt);
    do{
        switch (opt){
            case 1:
                printf("\nEnter the tempertaure in Fahrenheit: ");
                scanf("%f", &f);
                printf("\n%f degre fahrenheit = %fdegree celcius\n", f, fc(f));
                break;
            case 2:
                printf("\nEnter the temperature in Celsius: ");
                scanf("%f", &c);
                printf("\n%f degre celsius = %fdegree fahrenheit\n", c, cf(c));
                break;
            default:
                exit(0);
                break;
        }
        printf("\nDo you wanna continue? Yes(1)/No(0): ");
        scanf("%d", &opt);
    }while(opt  == 1);
}

float fc(float F){
    return((5.00 / 9.00) * (F - 32.00));
}

float cf(float C){
    return(32.00 + ((9.00 / 5.00) * C));
}