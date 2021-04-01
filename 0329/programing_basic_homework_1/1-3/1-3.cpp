#include <stdio.h>

int main(){
    int a,b,c,d,e;
    printf("Total miles driven per day : ");
    scanf("%d",&a);
    printf("Cost per gallon of gasoline : ");
    scanf("%d",&b);
    printf("Average miles per gallon : ");
    scanf("%d",&c);
    printf("Parking fees per day : ");
    scanf("%d",&d);
    printf("Tolls per day : ");
    scanf("%d",&e);
    printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
    int consume;
    consume =  a/c*b+d+e;

    printf("Your driving cost : %d\n",consume);
    printf("202135577 정민규\n");
    return 0;
}