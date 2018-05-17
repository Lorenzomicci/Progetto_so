#include <stdio.h>
#include <stdlib.h>
typedef struct List {
    char* stringa;
    int n;
    struct List* next;
} List;


int isEmpty(List* list)
{
    return list==NULL;
}

int size(List* list)
{
    int counter = 0;
    while(list!=NULL)
    {
        list = list->next;
        counter ++;
    }
    return counter;
}





List* contains(List* list, char* string)
{
    
    while(list!=NULL)
    {
       /* if(strcmp(list->stringa,string)) 
        {
        return list;
        }
        list = list->next;*/
    }
    
    return list;
}


List* Add(List* list,char* parola) {
    
    List* newList = calloc(sizeof(List));
    //newList = contains(list,parola);
    if(newList!=NULL)
    {
        newList->n++;
        return newList;
    }
    else
    {
      newList -> stringa = parola;
      newList -> n = 1;
      newList -> next= list;
      return newList;
    }

}


void printList(List* list)
{

   while(list!=NULL)
   {
   
       printf("%s %d",list->stringa,list->n);
       list = list->next;
   }

}



int main(int argc, char const *argv[]) 
{
  List* lista = malloc(sizeof(List));
  lista = Add(lista,"culo");
  lista = Add(lista,"culo");
  lista = Add(lista,"culo");
  printList(lista);
  
  
 
  return 0;
}

