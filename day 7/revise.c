#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void){
    char *name1 = "anant";
    char *name = malloc(strlen(name1)+1);
    strcpy(name, name1);
    printf("%s\n", name);
    free(name);

    int *weight;
    weight = malloc(2*sizeof(int));
    weight[0] = 5;
    weight[1] = 10;
    
    // printing dynamically alloted array of integers.
    for(int i = 0; i<2; i++){
        printf("%i\n", weight[i]);
    }
    free(weight);

    // taking int input.
    int n;
    printf("Enter your age: ");
    scanf("%i", &n);
    printf("Your age is %i\n", n);

    // Taking string input.
    char *sir_name = malloc(10);
    printf("Enter your sirname: ");
    scanf("%s", sir_name);
    printf("Your sirname is %s\n", sir_name);
    free(sir_name);
}