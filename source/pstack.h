#pragma once
#ifndef _PSTACK_
#define _PSTACK_
#include"Node2/Node2.h"
#include"Dynarry/DynArray.h"
#include"Stack/steck.h"

template<class T>
class Pstack {
public:
	Pstack();

	void push(T val, unsigned int i);

	T pop(unsigned int i);


	Steck<T>* get_stack(unsigned int i);

	T peek(unsigned int i);

	~Pstack();



private:
	DynArray<Node2<T>*> *arr;

};








#include"pstack.ipp"
#endif