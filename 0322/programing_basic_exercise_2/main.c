//
//  main.c
//  programing_basic_exercise_2
//
//  Created by 정민규 on 2021/03/22.
//
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float radius, height, volume;
    printf("\n Please type the radius : ");
    scanf("%f", &radius);
    printf("\n Please type the height : ");
    scanf("%f", &height);
    volume = 3.14 * radius * radius * height;
    printf("volume = %f\n", volume);
    
    return 0;
}
