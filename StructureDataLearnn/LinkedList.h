#pragma once
#include <iostream>
#include"Node.h"

namespace MyLib {

	template<typename T>
	class List {
	private:
		Node<T>* First;
		Node<T>* Last;
		int Count = 0;
	public:
		int GetSize(){ return Count; }
		List() :First(nullptr), Last(nullptr) {}
		bool IsValid() { return First; }
		void Print(void(*Output)(T Value));

		void PushBack(const T  &Data);
		void PushFront(const T &Data);
		void InsertAt( int &Value, const T &Data);
		void PopFront();
		void PopBack();
		void RemoveByValue(const T &Data);
		Node<T>*Begin() { return First; }
		Node<T>*End() { return Last; }
		~List();

	};


}

#include "LinkedList.inl"