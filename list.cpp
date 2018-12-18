#include <stdlib.h>
#include "list.h"

struct _list{
  Node* head;
};

struct _node{
  void* data;
  Node* next;
};

List* list_create(){
  return (List*)malloc(sizeof(List));
}

void list_delete(List *list){
free(list);
}

void list_add(List *list, void *data){

}

void list_insert_after(Node *node, void *data){

}

Node* list_get_first(List *list){
  return list->head;
}

Node* list_get_next(Node *node){
  return node->next;
}

void* list_get_data(Node *node){
return node->data;
}
