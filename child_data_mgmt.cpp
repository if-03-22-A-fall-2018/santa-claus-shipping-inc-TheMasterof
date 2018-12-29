#include <stdlib.h>
#include <string.h>
#include "child_data_mgmt.h"

ChildDataMgmt* cdm_create(){
  _childDataMgmt* child=(_childDataMgmt*)malloc(sizeof(_childDataMgmt));
  child->kids=list_create();
  return child;
}

void cdm_add_data(ChildDataMgmt *cdm, ChildData *data){
  Node* curr=list_get_first(cdm->kids);
  if (curr==0) {
    list_add(cdm->kids, (void*)data);

  }else{
    _childData* curr_data=(_childData*)list_get_data(curr);
    Node* prev=0;

    while (curr!=0&&strcmp(curr_data->city, data->city)<=0) {
      prev=curr;
      curr=list_get_next(curr);
      if (curr!=0) {
        curr_data=(_childData*)list_get_data(curr);
      }
    }
    if (prev!=0) {
      list_insert_after(prev, (void*)data);
    }
    else {
      list_add(cdm->kids, (void*)data);
    }
  }
}

Node* cdm_get_sorted_data(ChildDataMgmt *cdm){
  return list_get_first(cdm->kids);
}

void cdm_delete(ChildDataMgmt *cdm){
  list_delete(cdm->kids);
  free(cdm);
}
