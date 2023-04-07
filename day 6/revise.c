#include <stdio.h>
#include <string.h>

int main(void){
    // pointers
    int value = 10;
    int *p = &value;
    printf("%i\n", *p);
    
    // How strings are made.
    char *name = "anant";
    for(int i = 0; i<strlen(name); i++){
        printf("%c\n", name[i]);
    }
    printf("%c\n", *name);
    printf("%c\n", (int)*name+1);

}