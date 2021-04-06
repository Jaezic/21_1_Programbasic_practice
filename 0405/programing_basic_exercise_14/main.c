#include <stdio.h>

int main(){
    int inNum;
    printf("Type the number between 1 or 2 : ");
    scanf("%d", &inNum);
    switch (inNum)
    {
        case 1:
            printf("cat\n");
            break;

        case 2:
            printf("mouse\n");
            break;

        default:
            printf("bat\n");
            break;
    }   
}