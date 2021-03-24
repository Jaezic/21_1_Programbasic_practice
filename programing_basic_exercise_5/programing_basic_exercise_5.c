#include <stdio.h>

int main(){
    float num1, num2, difference, approx; 
    printf("Please type the num1 : ");
    scanf("%f",&num1);
    printf("Please type the num2 : ");
    scanf("%f",&num2);
    difference = num1 > num2 ? num1 - num2 : num2 - num1;
    if(difference < 0.001){
        approx = 0;
    }
    else
        approx = difference/2.0;
    printf("approx = %f", approx);
    return 0;
}