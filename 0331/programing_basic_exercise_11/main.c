#include <stdio.h>

int main(){
    int i, j;
    for(i=1; i<=9; i++){
        if(i==8) continue;
        printf("\n\n%d 단", i);
        printf("\n----------------------");
        for(j=1; j<=9; j++){
            if(j == 3)  break;
            printf("\n %d x %d = %d", i,j, i*j);
        }
        printf("\nout of inner loop");
    }
    printf("\nout of outerloop");
}