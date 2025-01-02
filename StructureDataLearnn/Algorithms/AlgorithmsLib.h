#pragma once
#include "/Users/IGOR/Source/repos/StructureDataLearnn/StructureDataLearnn/Node.h"

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


	


}



