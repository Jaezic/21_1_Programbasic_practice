//
//  main.c
//  programing_basic_exercise_1
//
//  Created by 정민규 on 2021/03/22.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float row,column,height;
    printf("Please type the length : ");
    scanf("%f", &row);
    printf("\nPlease type the width : ");
    scanf("%f", &column);
    printf("\nPlease type the length : ");
    scanf("%f", &height);
    printf("Row : %.1f Column : %.1f height : %.1f\n", row, column, height);
    printf("Volume : %.1f\n", row*column*height);
    return 0;
}
