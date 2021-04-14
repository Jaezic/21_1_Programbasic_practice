#include <stdio.h>

int main(){
    int i = 0;
    char string[81], string2[81];
    printf("Type the sentence : ");
    gets(string);
    while(string[i] != '\0'){
        i++;
    }
    printf("Type the sentence : ");
    gets(string2);
    int j =0;
    while(string2[j]!= '\0'){
        string[i+j] = string2[j];
        j++;
    }
    printf("%s",string);
    return 0;
}