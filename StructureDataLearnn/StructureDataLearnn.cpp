#include <iostream>
#include "LinkedList.h"
#include "Node.h"
#include"Algorithms/AlgorithmsLib.h"
#include "Vector.h"

class x {
public:
	int age;
	std::string name;
	x(int a,std::string value):age(a),name(value){}
	x(){}
	friend bool operator==(x value1, x value2) {
		return (value1.age == value2.age && value1.name == value2.name);
	}
	~x() {}
};


int main()
{

	MyLib::Vector<x>arr;
	MyLib::Vector<x>arr2;
	arr.PushBack(x(1, "One"));
	arr.PushBack(x(2, "Two"));
	arr.PushBack(x(3, "Three"));

	arr2 = arr;

	for (size_t i = 0; i < arr2.GetSize(); i++)
	{
		std::cout << arr2[i].age << std::endl;
		std::cout << arr2[i].name << std::endl;
	}
}


//void print(x value) {
//	
//	std::cout << value.age;
//	std::cout << value.name;
//	std::cout << std::endl;
//}
//void print(x *value) {
//	std::cout << value->age;
//	std::cout << value->name;
//	std::cout << std::endl;
//}