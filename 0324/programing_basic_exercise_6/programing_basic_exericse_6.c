#include <stdio.h>

int main(){
    int num = 0, evenSum = 0, oddSum = 0;
    for(int i=0; i<5; i++){
        printf("Please type the number : ");
        scanf("%d",&num);

        if(num % 2 == 0) 
            evenSum += num;
        else    
            oddSum += num;
        printf("evensum = %d, oddsum = %d\n", evenSum, oddSum);
    }
    return 0;
    
    
}