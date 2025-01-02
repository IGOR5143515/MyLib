#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include"Algorithms/AlgorithmsLib.h"

class x {
public:
	int age;
	std::string name;
	x(int a,std::string value):age(a),name(value){}
	
	friend bool operator==(x value1, x value2) {
		return (value1.age == value2.age && value1.name == value2.name);
	}

};

void print(x value) {
	std::cout << value.age;
	std::cout << value.name;
	std::cout << std::endl;
}
void print(x *value) {
	std::cout << value->age;
	std::cout << value->name;
	std::cout << std::endl;
}

int main()
{
	
	MyLib::List<x>arr;
	x one(1, "One");
	x two(2, "Two");
	arr.PushBack(one);

	arr.RemoveByValue(one);

	arr.Print(print);
	


	//arr.Print(print);
}



//class Node {
//private:
//
//	int age;
//	std::string name;
//	Node* Next = nullptr;
//
//public:
//
//	Node(int Age, std::string Name) :age(Age), name(Name) {}
//
//	Node() {}
//
//	int GetAge() { return age; }
//
//	std::string GetName() { return name; }
//
//	friend bool operator==(Node val1, Node val2) {
//
//		return (val1.age == val2.age && val1.name == val2.name);
//
//	}
//
//};

//class list {
//
//private:
//	Node* First = nullptr;
//	Node* End = nullptr;
//	int size = 0;
//public:
//	void PushBack(int val, std::string StrVal) {
//
//		Node* NewNode = new Node(val, StrVal);
//
//		if (First == nullptr)
//			First = End = NewNode;
//		else
//			End->Next = NewNode;
//
//		End = NewNode;
//		size++;
//
//	}
//	bool IsAmpty() { return First == nullptr; }
//
//
//	void print() {
//		if (!First)return;
//		Node* Temp = First;
//		while (!IsAmpty()) {
//			if (!Temp)return;
//			std::cout << Temp->age << " ";
//			std::cout << Temp->name << std::endl;
//			Temp = Temp->Next;
//		}
//	}
//
//	void AddToHead(Node Data) {
//		Node* NewData = new Node(Data.age, Data.name);
//		Node* Temp = First;
//		while (true) {
//			if (Temp->Next == nullptr) {
//				Temp->Next = NewData;
//				return;
//			}
//
//			Temp = Temp->Next;
//		}
//		size++;
//	}
//
//	void AddToTail(Node Data) {
//		Node* NewData = new Node(Data.age, Data.name);
//
//		NewData->Next = First;
//		First = NewData;
//
//		size++;
//	}
//
//	void AddAt(int Index, Node Data) {
//		Node* NewNode = new Node(Data.age, Data.name);
//		Node* Temp = First;
//
//		if (Index > size)return;
//
//		for (size_t i = 1; i < Index + 1; i++)
//		{
//
//			if (i == Index) {
//
//				Node* T = Temp->Next;
//				NewNode->Next = T;
//				Temp->Next = NewNode;
//
//
//			}
//			Temp = Temp->Next;
//
//		}
//		size++;
//	}
//
//	void RemoveFromHead() {
//		Node* Temp = First;
//		if (!Temp)return;
//		if (!First)return;
//
//
//		while (Temp && Temp->Next != nullptr) {
//
//			if (Temp->Next == End) {
//
//				delete Temp->Next;
//				Temp->Next = nullptr;
//				End = Temp;
//			}
//
//			Temp = Temp->Next;
//
//		}
//	}
//
//	void RemoveFromTail() {
//		if (!First)return;
//
//		Node* Temp = nullptr;
//
//		Temp = First;
//		First = First->Next;
//
//		delete Temp;
//
//	}
//
//	void RemoveAt(int Index) {
//
//		if (!First)return;
//		Node* Temp = First;
//		Node* Previos = nullptr;
//
//		for (size_t i = 0; i < Index; i++)
//		{
//
//			Previos = Temp;
//			Temp = Temp->Next;
//
//		}
//		if (Previos) {
//			Previos->Next = Temp->Next;
//		}
//		delete Temp;
//
//	}
//
//	void remove(Node data) {
//
//		if (!First)return;
//		Node* Temp = First;
//		Node* Previos = nullptr;
//		while (First->Next != nullptr) {
//
//			if (*Temp == data) {
//
//				if (Previos)
//					Previos->Next = Temp->Next;
//
//				delete Temp;
//
//				return;
//			}
//
//			Previos = Temp;
//			Temp = Temp->Next;
//		}
//	}
//
//
//	Node* Find(int Age) {
//		if (!First)return nullptr;
//
//		Node* Temp = First;
//
//		while (Temp->Next != nullptr) {
//
//			if (Temp && Age == Temp->age)
//				return Temp;
//
//			Temp = Temp->Next;
//
//		}
//
//		return nullptr;
//
//	}
//	bool Contains(Node Data) {
//		if (!First)return false;
//
//		Node* Temp = First;
//
//		while (Temp->Next != nullptr) {
//
//			if (Temp && Data == *Temp)
//				return true;
//
//			Temp = Temp->Next;
//
//		}
//
//		return false;
//	}
//
//	void Clear() {
//		if (!First)return;
//
//		Node* Temp = nullptr;
//		while (First) {
//
//			Temp = First;
//			First = First->Next;
//			delete Temp;
//
//
//		}
//		First = nullptr;
//		End = nullptr;
//
//	}
//
//	void Reverse() {
//
//	}
//	int GetSize() { return size; }
//	Node* GetHead() { return First; }
//	Node* GetTail() { return End; }
//
//
//};