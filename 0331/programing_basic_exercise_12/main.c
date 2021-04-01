#include <stdio.h>

int main(){
    int i,j, numStudent=5, numCourses=3;
    float grade, total, average, total_d, average_d;

    for(i=1; i<=numStudent; i++){
        total = 0;
        printf("\n-------Number %d student-------\n", i);
        for(j=1; j<=numCourses; j++){
            printf("enter grade : ");
            scanf("%f", &grade);
            total = total + grade;
        }
        average = total/ numCourses;
        total_d += total;
        printf("\nNumber %d student average = %.3f",i,average);
    }
    average_d = total_d/numStudent;
    printf("\n\nTotal department average = %.3f",average_d);
}