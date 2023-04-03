#include <stdio.h>

int main(void){
    // while loop usage
    int coint = 1;
    while(coint <= 5){
        printf("I'm %i times larger than before\n", coint);
        coint++;
    }
    // Do while loop
    
    do{
        printf("Coint is - %i\n", coint);
        coint++;
    }
    while(coint<10);
}