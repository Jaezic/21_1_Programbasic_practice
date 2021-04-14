#include <stdio.h>

int main(){
    int i = 0;
    char string[81];
    printf("Type the sentence : ");
    gets(string);
    while(string[i] != '\0'){
        i++;
    }
    printf("number of characters : %d\n",i);
    return 0;
}