#pragma once
#include "Node.h"


namespace MyLib {
	template <typename T>
	Node<T>*Find(Node<T>* Begin,Node<T>*End,T Data) {
		if (!Begin && End)return nullptr;
		Node<T>* Temp = Begin;

		while (Temp) {

			if (Temp->GetData() == Data)
			return Temp;

			Temp = Temp->Next;
			
		}
		return nullptr;

	}

	template <typename T>
	void Reverce(const Node<T>& Data){}

	template <typename T>
	void Clear(Node<T>& Data) {}

	template <typename T>
	void Sort(Node<T>& Data) {}



}




