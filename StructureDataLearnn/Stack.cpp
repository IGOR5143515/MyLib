#include "Stack.h"
#include <iostream>
template<typename T>
 bool Stack<T>::isEmpty() const
{
	return TopIndex==-1;
}

template<typename T>
bool Stack<T>::isFull() const
{
	return TopIndex==MAX_SIZE-1;
}

template<typename T>
void Stack<T>::push(T value)
{
	if (isFull())
		return;

	Data[++TopIndex] = value;

}

template<typename T>
void Stack<T>::pop()
{
	if (isEmpty())return;

	TopIndex--;

}

template<typename T>
int Stack<T>::top() const
{
	if (isEmpty())return;
	return Data[TopIndex];
}



