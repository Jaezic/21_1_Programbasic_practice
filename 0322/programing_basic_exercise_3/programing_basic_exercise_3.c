//
//  main.c
//  programing_basic_exercise_3
//
//  Created by 정민규 on 2021/03/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int num1, num2 ,num3;
    printf("Please type number 1 : ");
    scanf("%d", &num1);
    printf("Please type number 2 : ");
    scanf("%d", &num2);
    printf("Please type number 3 : ");
    scanf("%d", &num3);
    if((num1 > num2) && (num1 > num3)){
        printf("num1 is the biggest\n");
    }
    else    printf("num1 may not be the biggest\n");
    scanf("%d", &num1);
    
    return 0;
}
