#include<iostream>
#include"pstack.h"

using namespace std;




int main() {


	Pstack<int> a;



	for (int i = 0; i < 10; i++) {
		a.push(i, i);
	}

	Steck<int>* H = a.get_stack(2);
	while (H->Size() > 0) {
		cout << H->pop()<<endl;
	}

	return 0;
}