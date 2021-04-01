#include <stdio.h>

int main(){
    int count, max = 25;
    float num, total, average;
    count = 0;
    total = 0.0;
    do {
        printf("\nEnter a number : ");
        scanf("%f", &num);
        total = total + num;
        count++;
    } while (count < max);
    average = total / max;
    printf("Average = %.3f", average);
}