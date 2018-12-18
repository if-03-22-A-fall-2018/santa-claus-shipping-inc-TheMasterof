#include <stdlib.h>
#include "list.h"

List* list_create(){
  List* list;
  return list;
}

void list_delete(List *list){
free(list);
}

void list_add(List *list, void *data){

}

void list_insert_after(Node *node, void *data){

}

Node* list_get_first(List *list){
Node* node;
  return node;
}

Node* list_get_next(Node *node){
  return node;
}

void* list_get_data(Node *node){
return 0;
}
