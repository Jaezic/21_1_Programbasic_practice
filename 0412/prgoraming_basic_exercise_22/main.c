#include <stdio.h>

#define CITY_SIZE 3
#define DAY_SIZE 7

int main(){
    int tempC[CITY_SIZE][DAY_SIZE];
    float tempF[CITY_SIZE][DAY_SIZE];
    int i,j;
    float tmp;
    int sum[CITY_SIZE] = { 0, };

    printf("Get each city temperature value in celcius\n");
    for(i=0; i<CITY_SIZE; i++){
        for(j=0; j<DAY_SIZE; j++){
            scanf("%d",&tempC[i][j]);
            tempF[i][j] = (9.0/5.0) * tempC[i][j] + 32.0;
            if(i != 1)  tmp += tempF[i][j];
        }
        if(i != 1)  printf("\naverage = %f\n", tmp/DAY_SIZE);
        else    printf("\n\n");
    }
}