#include <stdio.h>
#include <stdlib.h>

int get_int(char *string);
void print_wave(int n, int len);
void print_spaces(int depth, int m);
void print_hashes(int m);

int main(void){
    int n = get_int("Enter number of sea waves you want? ");
    int depth = get_int("What should be the depth of a wave? ");
    print_wave(n, depth);
}

void print_wave(int n, int depth){
    for(int m = 1; m<=depth; m++){ // loop for printing depth layers of waves.
        for(int i = 0; i<n; i++){ // loop for printing n number of waves.
            
            // First half of a wave.
            print_spaces(depth, m);
            print_hashes(m);

            // Second half of a wave.
            print_hashes(m);
            print_spaces(depth, m);
        }
        printf("\n");
    }
}

void print_spaces(int depth, int m){
    for(int j = 0; j<depth-m; j++){ // loop for printing spaces
                printf(" ");
    }
}

void print_hashes(int m){
    for(int k = 0; k<m; k++){ // loop for printing #.
                printf("#");
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