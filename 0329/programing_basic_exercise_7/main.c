#include <stdio.h>

int main(){
    int i = 0;
    float num, sum = 0;
    while(i < 25){
        i++;
        printf("Type the float : ");
        scanf("%f",&num);
        sum += num;
    }
    printf("Sum = %f, Average = %f, Count = %d", sum, sum/i, i);
    return 0;
}