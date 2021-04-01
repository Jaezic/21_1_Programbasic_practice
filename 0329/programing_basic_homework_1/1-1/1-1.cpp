#include <stdio.h>

int main(){
    int num1, hour, min, sec;
    printf("Total time elapsed : ");
    scanf("%d",&num1); // 80 sec
    hour = num1/3600;
    min = (num1%3600)/60;
    sec = num1%60;
    printf("%02d : %02d : %02d\n",hour, min, sec);
    printf("202135577 정민규\n");
    

    return 0;
}