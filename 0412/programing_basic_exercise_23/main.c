#include <stdio.h>

int main(){
    int grade[5][3];
    int total_d = 0, total_s = 0;
    for(int k = 0; k<5; k++){
        total_d = 0;
        for(int j= 0; j<3; j++){
            printf("type the grade : ");
            scanf("%d",&grade[k][j]);
            total_d += grade[k][j];
        }
        printf("Course %d average : %d\n",k+1, total_d/3);
    }
    for(int j = 0; j<3; j++){
        total_s = 0;
        for(int k= 0; k<5; k++){
            total_s += grade[k][j];
        }
        printf("Student %d average : %d\n",j+1, total_s/5);
    }

    return 0;
}