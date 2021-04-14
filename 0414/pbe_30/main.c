#include <stdio.h>
#include <string.h>

int main(){
    char a[100] = "happy ";
    char b[100] = "birthday to you";

    printf("String append : %s\n",strcat(a,b));
    return 0;
}