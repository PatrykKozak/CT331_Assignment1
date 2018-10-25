#include <stdio.h>

int main(int arg, char* argc[]){
	int a;
	int* b;
	long c;
	double* d;
	char** e;

	printf("a = %ld bytes \n", sizeof(a));
	printf("b = %ld bytes \n", sizeof(b));
	printf("c = %ld bytes \n", sizeof(c));
	printf("d = %ld bytes \n", sizeof(d));
	printf("e = %ld bytes \n", sizeof(e));
	
	return 0;
	}
