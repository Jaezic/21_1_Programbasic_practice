#include <stdio.h>

int main(){
    int num1;
    printf("Type the integer (five-digit): ");
    scanf("%d", &num1); // 23423
    int a,b,c,d,e;
    a = num1/10000;
    b = (num1%10000)/1000;
    c = (num1%1000)/100;
    d = (num1%100)/10;
    e = (num1%10);
    printf("%d   %d   %d   %d   %d\n",a,b,c,d,e);
    printf("202135577 정민규\n");
    return 0;
}