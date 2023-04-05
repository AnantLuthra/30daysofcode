#include <stdio.h>

typedef struct // making our own datatype.
{
    char* name;
    int age;
}
person;

void draw(int n);
int facto(int n);
void draw2(int n);

int main(void){
    person people[3];

    people[0].name = "anant";
    people[0].age = 18;

    people[1].name = "shiv";
    people[1].age = 19;

    people[2].name = "devank";
    people[2].age = 20;

    for(int i = 0; i<3; i++){
        printf("Name is %s and his age is %i\n", people[i].name, people[i].age);
    }

    // Recursions.

    draw(5);
    draw2(5);
    printf("factorial is - %i\n",facto(5));
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

int facto(int n){
    if (n==1){
        return 1;
    }
    return n * facto(n-1);
}