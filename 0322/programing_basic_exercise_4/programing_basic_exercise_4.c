//
//  main.c
//  programing_basic_exercise_4
//
//  Created by 정민규 on 2021/03/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int num1, num2;
    printf("Please type number 1 : ");
    scanf("%d", &num1);
    printf("Please type number 2 : ");
    scanf("%d", &num2);
    if((num1*2 == num2) || (num2*2 == num1))
        printf("sum = %d\n",num1+num2);
    else
        printf("condition not satisfied\n");
    return 0;
}
