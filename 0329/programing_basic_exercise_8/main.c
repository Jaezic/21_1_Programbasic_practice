#include <stdio.h>

int main(){
    float num, sum = 0;
    int i;
    for(i = 0; i<10; i++){
        printf("Type the float : ");
        scanf("%f",&num);
        sum += num;
    }
    printf("Sum = %f, Average = %f, Count = %d", sum, sum/i, i);
    return 0;
}