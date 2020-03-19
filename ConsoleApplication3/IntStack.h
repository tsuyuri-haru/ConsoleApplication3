#pragma once


typedef struct {

	int max;
	int ptr;
	int* stk;

}IntStack;


//Stack èâä˙âª
int Init(IntStack* a, int max);



int Push(IntStack * a, int x);

int Pop(IntStack * a, int* x);


int Peek(const IntStack* a, int* x);

void Print(const IntStack* a);

int IsEmpty(const IntStack* a);

void Clear(IntStack* a);

int IsFull(const IntStack* a);

int Size(const IntStack* a);

int Capacity(const IntStack* a);

int Search(const IntStack* a, int x);

void Terminater(IntStack* a);