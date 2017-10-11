#include <stdio.h>
#include "linkedList.c""
#include "linkedList.h"
#include "tests.h"

int main(int arg, char* argc[]){
	listElement** list = new List<string>;
	char* data = "A";
	char* data2 = "B";
	char* data3 = "c";
	size_t size = 20;
	createEl(data,size);
	createEl(data2, size);
	length();
	push(data3,size);
	pop(list);
	enqueue(list, data, size);
	dequeue(list);
  return 0;
}
