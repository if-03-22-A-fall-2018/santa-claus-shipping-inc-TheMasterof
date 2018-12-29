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
  List* list=(_list*)malloc(sizeof(_list));
  list->head=0;
  return list;
}

void list_delete(List *list){
  Node* curr=list->head;
  Node* prev=0;

  while (curr!=0) {
    prev=curr;
    curr=curr->next;
    /*free(prev->data);*/
    free(prev);
  }
  free(list);
}

void list_add(List *list, void *data){
  if (list!=0) {
    _node* node=(_node*)malloc(sizeof (_node));
    node->data=data;
    node->next=list->head;
    list->head=node;
  }
}

void list_insert_after(Node *node, void *data){
  _node* new_node=(_node*)malloc(sizeof (_node));
  new_node->data=data;
  new_node->next=node->next;
  node->next=new_node;
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
