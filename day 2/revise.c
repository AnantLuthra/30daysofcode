#include <stdio.h>
#include <ctype.h>
#include <string.h>

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
    
    // Arrays
    int ages[] = {50, 60, 70};
    char* names[] = {"anant", "shiv", "hariom"};
    char characters[] = {'a', 'b', 'c'};  
    char* name = "AnAnT";           // How strings are made in C
    printf("Hello %s\n", name); 

    printf("Hello %s %i %c %i\n", names[2], ages[2], characters[0], characters[0]);

    printf("%c\n",toupper(name[1])); // lower & upper conversion of char.
    printf("%i\n", name[5]); // Implicit and explicit conversion of char.

    for(int i = 0; i < strlen(name); i++){
        printf("%c",tolower(name[i]));
    }
    printf("\n");
}
