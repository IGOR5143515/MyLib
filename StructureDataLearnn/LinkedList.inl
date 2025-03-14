#include "LinkedList.h"
namespace MyLib {
	template<typename T>
	void MyLib::List<T>::Print(void(*Output)(T Value))
	{
		Node<T>* Temp = First;
		if (!IsValid())return;

		while (Temp) {

			Output(Temp->GetData());
			Temp = Temp->Next;
		}
		
	}

	template<typename T>
	void MyLib::List<T>::PushBack(const T &Data) {

		Node<T>* NewData = new Node<T>(Data);

		if (!IsValid()) {
			First = Last = NewData;
			return;
		}

		Last->Next = NewData;
		Last = Last->Next;
		Count++;
	}

	template<typename T>
	void List<T>::PushFront(const T &Data)
	{
		if (IsValid()) {
			Node<T>* NewNode = new Node<T>(Data);
			Node<T>* Temp = First;

			Temp = NewNode;
			Temp->Next = First;
			First = Temp;
			Count++;
		}
		else
			PushBack(Data);
		
	}

	template<typename T>
	void List<T>::InsertAt(int &Value, const T &Data) {

		if (!IsValid()||Value<0||Value>GetSize())return;

		Node<T>*NewNode = new Node<T>(Data);

		if (Value == 0) {
			NewNode->Next = First;
			First = NewNode;
			Count++;
			return;
		}

		Node<T>* Temp = First;

		for (size_t i = 0; i <Value-1; i++)
		{
			if (!Temp) {
				delete NewNode;
				return;
			}
			Temp = Temp->Next;
		}

		NewNode->Next = Temp->Next;
		Temp->Next=NewNode;
		Count++;
	}

	template<typename T>
	void List<T>::PopFront()
	{
		if (!IsValid())return;

		Node<T>* Temp=First;
		First = First->Next;
		delete Temp;

		Count--;
	}

	template<typename T>
	void List<T>::PopBack()
	{
		if (!IsValid())return;

		if (First == Last) {
			delete First;
			First = Last = nullptr;
			return;
		}
	
		Node<T>* Temp=First;

		while(Temp->Next!= Last) {
			Temp = Temp->Next;
		}

		Count--;
		delete Temp->Next;
		Temp->Next = nullptr;
		Last = Temp;

	}

	template<typename T>
	void List<T>::RemoveByValue(const T &Data)	
	{
		if (!IsValid())return;
		Node<T>* Temp = First;
		Node<T>* Previos =First;

		while (Temp) {

			if (Temp->GetData() == Data) {

				if (Temp == First) {
					First = First->Next;
					delete Temp;
					Temp = First;

					if (!First) {
					First = Last = nullptr;
					}
				
					continue;	
				}
			
				Previos->Next = Temp->Next;
				delete Temp;
				Temp = Previos;

			}
				Previos = Temp;
				Temp = Temp->Next;
		}	
	}

	template<typename T>
	List<T>::~List(){

		Node<T>*Temp = First;

		while (Temp) {

			if (IsValid()) {

				First = First->Next;
				delete Temp;
				Temp = First;

			}
		}

		Last = First= nullptr;
		Count = 0;
	}
}
