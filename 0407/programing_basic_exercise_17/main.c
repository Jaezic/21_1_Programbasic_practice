#include <stdio.h>

int main(){
    int i, grade[25], count, maxint, total;
    count = 25;
    for (i=0; i<count; i++){
        printf("\n Type a grade : ");
        scanf("%d", &grade[i]);
        if(i == 0)  maxint = grade[i];
        else if(maxint < grade[i])  maxint = grade[i];
        total += grade[i];
    }
    printf(" Max integer : %d average : %d",maxint, total/count);
    return 0;
}