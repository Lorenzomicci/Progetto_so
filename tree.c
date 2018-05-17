#include "file.h"

typedef struct Occorrenza {
    char stringa;
    int n;
    
} Occorrenza;


// Possiamo usare una struttura ad albero 

typedef struct Node
{
    Occorrenza parola;
    Node *left;
    Node *right;
} Node;



void insert_word (Occorrenza *word,Node *root) {
    
   Node app = *root;
   
   if(app==NULL){
       app = malloc(sizeof(Node));
       app->left = app->right = NULL;
       app->
   }
    
    
    
}

void printInsequence(Node *root);



/*
int main(int argc, char const *argv[]) {
    
    
    
    return 0;
}

*/



































