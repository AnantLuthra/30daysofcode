#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

bool check(const char *word);
unsigned int hash(const char *word);
bool load(const char *dictionary);
unsigned int size(void);
bool unload(void);

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// variables.
unsigned int total_words;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // checking that a function is their in our dictionary or not.
    int index = hash(word);
    node *list = table[index];
    for(node *n = list; n != NULL; n = n->next){
        if (strcasecmp(word, n->word) == 0){
            return true;
        }
    }
    return false;
}

// TODO: Improve this hash function
unsigned int hash(const char *word)
{
    unsigned long hash_value = 0;

    for(int i = 0; i<strlen(word); i++){
        hash_value += tolower(word[i]);
    }
    return hash_value % N;


// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary){

    FILE *file = fopen(dictionary, "r");
    if (file == NULL){
        return false;
    }
    char word[LENGTH + 1];
    while(fscanf(file, "%s", word)!= EOF){
        node *n = malloc(sizeof(node));
        if(n == NULL){
            return false;
        }
        strcpy(n->word, word);

        int index = hash(word);
        n->next = table[index];
        table[index] = n;
        total_words++;
    }
    fclose(file);
    return true;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void){
    return total_words;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void){
    for(int i = 0; i<N; i++){
        for(node *n = table[i]; n!=NULL){
            node *tmp = n->next;
            free(n);
            n = tmp;
        }
    }
    return true;
}