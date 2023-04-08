#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
    char *name1 = "anant";
    char *name = malloc(strlen(name)+1);
    strycpy(name, name1);
    printf("%s\n", name);
    free(name);
}