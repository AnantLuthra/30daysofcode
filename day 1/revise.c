#include <stdio.h>

int check(int n);

int main(void){
    // normal stuff with loop.
    int value;
    value = 0;
    for (int i = 0; i<5; i++){
        value ++;
    }
    
    // using while loop.
    int output = check(value);
    if (output != 1){
        printf("Value isn't below 10\n");
    }
    else{
        printf("Yes you are welcomed.\n");
    }

    printf("Value of value variable is %i\n", value);
    char* name;
    name = "anant";
    printf("Hello I'm %s, I'm back\n", name);
}


int check(int n){
    // This function checks that given integer is bigger than 10 or not.

    if (n < 10){
        return 1;
    }
    else{
        return 0;
    }
}