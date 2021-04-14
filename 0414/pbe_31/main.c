#include <stdio.h>
#include <string.h>

int main(){
    char a[100] = "happy ";
    char b[100] = "happy";
    printf("String compare: %d\n",strcmp(a,b));
    return 0;
}