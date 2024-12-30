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

		void PushBack(T  &Data);
		void PushFront(T &Data);
		void InsertAt(int &Value, T &Data);
		void PopFront();
		void PopBack();
		void RemoveByValue(T &Data);
		

	};


}

#include "LinkedList.inl"