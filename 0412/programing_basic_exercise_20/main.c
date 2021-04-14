#include <stdio.h>

int main(){
    int i, k, num1[15], num2[5];

    for(i=0; i<5; i++){
        printf("\ntype a number : ");
        scanf("%d", &num2[i]);
    }
    for(k=0; k<10; k++){
        printf("\ntype a number2 : ");
        scanf("%d", &num1[k]);

    }
    printf("\n");
    for(k=0; k<10; k++){
        printf("%d ",num1[k]);
    }
    for(i=0; i<5; i++){
        num1[i+10] = num2[i];
    }
    printf("\n");
    for(i=0; i<5; i++){
        printf("%d ",num2[i]);
    }
    printf("\n");
    for(k=0; k<15; k++){
        printf("%d ",num1[k]);
    }

    return 0;
}