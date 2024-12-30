#pragma once
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
}