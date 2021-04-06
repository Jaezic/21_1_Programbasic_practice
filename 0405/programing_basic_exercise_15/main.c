#include <stdio.h>

int main(){
    int mstatus;
    printf("Type the number between 1~4 : ");
    scanf("%d",&mstatus);
    switch (mstatus)
    {
    case 1:/* constant-expression */
        printf("married");
        /* code */
        break;
    case 2:
        printf("single");
        break;
    case 3:
        printf("divorced");
        break;
    case 4:
        printf("widowed");
        break;
    default:
        printf("invalid code");
        break;
    }
}