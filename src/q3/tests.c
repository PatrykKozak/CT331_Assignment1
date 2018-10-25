#include <stdio.h>
#include "genericLinkedList.h"


  void printChar(void* data){
	printf("Char- %c\n", *(char*)data);
}

void printDouble(void* data){
	printf("Double- %f\n", *(double*)data);
}
void printInt(void* data){
	printf("Int- %d\n", *(int*)data);
}

void printString(void* data){
	printf("String- %s\n", data);
}

void printLong(void* data){
	printf("Long- %ld\n", *(long*)data);
}

void printFloat(void* data){
	printf("Float- %f\n", *(float*)data);
}

void runTests(){
  printf("Tests running...\n");
  
  
  
  
  char c = 'Q';
  double d = 12.12;
  int i = 20;
  char s[] = "String";
  float f = 2.22;
  
  listElement* l = createEl(&c, 30, &printChar);
  enqueue(&l, &d, sizeof(d), &printDouble);
  push(&l, &i, sizeof(i), &printInt);
  enqueue(&l, &s, sizeof(s), &printString);
  push(&l, &f, sizeof(f), &printFloat);
  
  traverse(el);
  printf("\nTests complete.\n");  
  
  
}
