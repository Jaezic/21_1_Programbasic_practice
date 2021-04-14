#include <stdio.h>
#include <string.h>

int main(){
    char str[81];
    strcpy(str, "these "); // 복사하기
    strcat(str, "strings "); // 붙이기
    strcat(str, "are ");
    strcat(str, "concatenated.");
    puts(str);
    printf("\nstr has %d characters\n", strlen(str)); // 길이재기
}