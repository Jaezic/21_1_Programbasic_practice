#include <stdio.h>

int main(){
    int odd = 0;
    for(int i = 0; i<1000; i++){
        if(i%2 == 1){
            odd += i;
        }
    }
    printf("Sum = %d\n",odd);
}