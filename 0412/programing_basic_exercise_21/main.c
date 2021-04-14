#include <stdio.h>

int main(){
    int i, num1[5], num2[5];

    for(i=0; i<5; i++){
        printf("\n type a number : ");
        scanf("%d", &num1[i]);
    }
    for(i=0; i<5; i++){
        printf("\n type a number : ");
        scanf("%d", &num2[i]);
    }
    for(i=0; i<5; i++){
        if(num1[i] == num2[i])  printf("result = 0\n");
        else if(num1[i] > num2[i]) printf("result = 1\n");
        else printf("result = -1\n");
    }

    return 0;
}