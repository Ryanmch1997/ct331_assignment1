#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "linkedList.h"

typedef struct listElementStruct{
  char* data;
  size_t size;
  struct listElementStruct* next;
} listElement;

//Creates a new linked list element with given content of size
//Returns a pointer to the element
listElement* createEl(char* data, size_t size){
  listElement* e = malloc(sizeof(listElement));
  if(e == NULL){
    //malloc has had an error
    return NULL; //return NULL to indicate an error.
  }
  char* dataPointer = malloc(sizeof(char)*size);
  if(dataPointer == NULL){
    //malloc has had an error
    free(e); //release the previously allocated memory
    return NULL; //return NULL to indicate an error.
  }
  strcpy(dataPointer, data);
  e->data = dataPointer;
  e->size = size;
  e->next = NULL;
  return e;
}
int length() {
	printf("Size of list:%d",sizeof(listElement));
}
void push(char* data, size_t size) {
	char8 data = (char*) malloc(sizeof(char*));
	data->value = value;
	data->next = listElement;
	return data;
}
listElement* pop(listElement** list) {	MY_STACK node = *list;

	if (list != NULL) list = (*head)->next;

	return node;}void enqueue(listElement** list, char* data, size_t size) {
	listElement** new_element, e;

	new_element = malloc(sizeof(list));
	new_element->data = data;
	new_element->next = NULL;

	if (!list)
		return new_element;

	e = list;
	while (e->next)
		e = e->next;
	e->next = new_element;

	return list;

}
listElement* dequeue(listElement* list) {
	ListElement* list = ((ListElement*);
	Node* temp = list->head->next;
	while (temp->next) temp = temp->next;
	free(temp->next);
	temp->next = 0;
	list->size--;
}
//Prints out each element in the list
void traverse(listElement* start){
  listElement* current = start;
  while(current != NULL){
    printf("%s\n", current->data);
    current = current->next;
  }
}

//Inserts a new element after the given el
//Returns the pointer to the new element
listElement* insertAfter(listElement* el, char* data, size_t size){
  listElement* newEl = createEl(data, size);
  listElement* next = el->next;
  newEl->next = next;
  el->next = newEl;
  return newEl;
}

//Delete the element after the given el
void deleteAfter(listElement* after){
  listElement* delete = after->next;
  listElement* newNext = delete->next;
  after->next = newNext;
  //need to free the memory because we used malloc
  free(delete->data);
  free(delete);
}
