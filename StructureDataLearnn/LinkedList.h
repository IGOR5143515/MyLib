#pragma once
#include <iostream>
namespace MyLib {
	template <typename T>
	class  Node {
	private:
		T Data;
	public:
		Node* Next;
	public:
		Node(T Value) :Data(Value), Next(nullptr) {}
		T GetData() { return Data; }
	};

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

		void PushBack(T Data);
		void PushFront(T Data);
		void InsertAt(int Value, T Data);
		void PopFront();
		void PopBack();
		void RemoveByValue(T Data);
	};


}

#include "LinkedList.inl"