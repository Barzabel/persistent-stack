#pragma once
template<class T>
Pstack<T>::Pstack(){
	this->arr=new DynArray<Node2<T>*>;

	this->arr->append(nullptr);
}

 template<class T>
 void Pstack<T>::push(T val, unsigned int i) {
	 Node2<T>* p = new Node2<T>(val);
	 p->prev = this->arr->get_item(i);
	 this->arr->append(p);



 }

template<class T>
T Pstack<T>::pop(unsigned int i) {
	T res;
	if (i == 0) {
		res= NULL;
	}
	else {
		res = this->arr->get_item(i)->value;
		this->arr->append(this->arr->get_item(i)->prev);
	}
 



	return res;
}


template<class T>
T Pstack<T>::peek(unsigned int i) {

	if (i == 0) {
		return NULL;
	}

	return this->arr->get_item(i)->value;
}



template<class T>
Steck<T>* Pstack<T>::get_stack(unsigned int i) {

	Steck<T>* res = new Steck<T>;
	if (i == 0) {
		return res;
	}
	Node2<T> * H = this->arr->get_item(i);
	while (H != nullptr) {
		res->push(H->value);
		H=H->prev;
	}




	return res;
}



	template<class T>
	Pstack<T>::~Pstack() 
	{
		this->arr->~DynArray();
	}