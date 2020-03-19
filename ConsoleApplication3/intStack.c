#include <stdio.h>
#include "IntStack.h"
#include <stdlib.h>

int Peek(const IntStack* a, int* x) {

	if (a->ptr <= 0)
		return -1;
	*x = a->stk[a->ptr - 1];
	return 0;
}

int Init(IntStack* a, int max) {
	a->ptr = 0;
	if ((a->stk = calloc(max, sizeof(int))) == NULL) {
		a->max = 0;
		return -1;
		
	}
	a->max = max;
	return 0;
}



int Push(IntStack* a, int x) {

	if (a->ptr >= a->max)
		return -1;

		a->stk[a->ptr++] = x;
	return 0;

}

int Pop(IntStack* a, int* x) {

	if (a->ptr <= 0)
		return -1;
	*x = a->stk[a->ptr--];
	return 0;
}



void Print(const IntStack* a) {

	int i;
	for (i = 0; i < a->ptr; i++) 
		printf("%d", a->stk[i]);
		putchar('\n');


}

int IsEmpty(const IntStack* a) {

	return a->ptr <= 0;

}

void Clear(IntStack* a) {

	a->ptr = 0;
}



int IsFull(const IntStack* a) {

	return a->ptr >= a->max;
}

int Size(const IntStack* a) {


	return a->ptr;

}

int Capacity(const IntStack* a) {

	return a->max;
}

/* ptr - 1　？　push の時　ptrを増加させてる（a->stk[ptr++] = x) 。
因ってpush後のptrが指してるところには値が入っていないからサーチする必要がない。*/
int Search(const IntStack* a, int x) {

	int i;
	for (i = a->ptr - 1; i >= 0; i--) 

		if (a->stk[i] == x)
			return i;

		return -1;

	
	
}

void Terminater(IntStack* a) {



	free(a->stk);
	a->max = a->ptr = 0;
		free(a);
		

}