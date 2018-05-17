#include <stdio.h>
#include "file.h"
#include <string.h>


void insert(struct node **head, char *word)
{
    struct node *temp = *head, *prev = *head;

    if (*head == NULL)
    {
        *head = (struct node *)malloc(sizeof(struct node));
        (*head)->a = word;
        (*head)->left = (*head)->right = NULL;
    }
    else
    {
        while (temp != NULL)
        {
            if (strcmp(word,temp->a) > 0)
            {
                prev = temp;
                temp = temp->right;
            }
            else
            {
                prev = temp;
                temp = temp->left;
            }
        }
        temp = (struct node *)malloc(sizeof(struct node));
        temp->a = word;
        if(strcmp(word,temp->a) > 0)                       //(word >= prev->a)
        {
            prev->right = temp;
        }
        else
        {
            prev->left = temp;
        }
    }
}





int main(int argc, char const *argv[]) {
  
  
  return 0;
}
















































