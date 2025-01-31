#pragma once

template<typename T>
class Stack
{
private:
	static const int MAX_SIZE = 100;
	T Data[MAX_SIZE];
	int TopIndex;
public:
	Stack():TopIndex(-1){}

	bool isEmpty() const;
	bool isFull() const;
	void push(T value);
	void pop();
	int top() const;
	int GetIndex() { return TopIndex; }
	
};

