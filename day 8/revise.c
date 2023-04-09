#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int number;
    struct node *next;
}
node;

int main(void){
    node *list = NULL;
    node *n = malloc(sizeof(node));
    if (n==NULL){
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n;

    printf("Value is %i\n", list->number);
}