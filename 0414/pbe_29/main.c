#include <stdio.h>
#include <string.h>

int main(){
    char a[] = "happy birthday to you";
    char b[25];
    char c[15];

    printf("String a : %s String b(Copied) : %s \n", a, strcpy(b,a));

    strncpy(c,a,5);
    c[5] = '\0';

    printf("String c : %s \n",c);
    return 0;
}