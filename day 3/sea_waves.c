#include <stdio.h>
#include <stdlib.h>

void draw(int n);
void draw2(int n);
int get_int(char *string);

int main(void){
    
    int waves = get_int("Enter the number of sea waves do you want? ");
    int len = get_int("Of what length do you want wave of? ");
    for(int i = 0; i<waves; i++){
        draw(len);
        draw2(len);
    }
}

void draw(int n){
    if (n==0){
        return;
    }
    draw(n-1);
    for(int i = 0; i<n; i++){
        printf("#");
    }
    printf("\n");
}

void draw2(int n){
    for (int j = 0; j<n; j++){
        for (int i = j; i<n; i++){
            printf("#");
        }
        printf("\n");
    }
}

int get_int(char *string) {

    int *a;
    a = malloc(sizeof(int));
    printf("%s", string);
    scanf("%i", a);
    int b = *a;
    free(a);
    return b;
}