#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    int number;
    struct node *next;
}
node;

int main(void){
    node *list = NULL;

    // adding first element.
    node *n = malloc(sizeof(node));
    if (n == NULL){
        return 1;
    }
    n->number = 1;
    n->next = NULL;
    list = n;

    // adding second element.
    n = malloc(sizeof(node));
    if (n==NULL){
        free(list);
        return 1;
    }
    n->number = 5;
    n->next = NULL;
    list->next = n;

    // adding third element.
    n = malloc(sizeof(node));
    if (n==NULL){
        free(list->next);
        free(list);
        return 1;
    }
    n->number = 3;
    n->next = NULL;

    list->next->next = n;

    // printing linked list.
    for(node *n = list; n!=NULL; n = n->next){
        printf("Value is %i\n", n->number);
    }
}