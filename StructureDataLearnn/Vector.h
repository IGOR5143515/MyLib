#pragma once

namespace MyLib {
	template <typename T>
	class Vector {

	private:
		size_t Size;
		size_t Capacity;
		T* Array;

		void Reallocate(size_t NewCapacity) {
			T* NewArray = new T[NewCapacity];

			for (size_t i = 0; i < Size; i++)
			{
				NewArray[i] = Array[i];
			}

			delete []Array;
			Array = NewArray;
			Capacity = NewCapacity;
		
		}
	public:
		Vector() :Size(0), Capacity(0), Array(nullptr) {}

		Vector(const Vector &Other):Size(Other.Size),Capacity(Other.Capacity){
			
			Array = T[Capacity];

			for (size_t i = 0; i < Size; i++)
			{
				Array = Other.Array[i];
			}


		}


		T &operator[](size_t Val) { return Array[Val]; }
		size_t GetSize() { return Size; }


		void PushBack(T Data) {
		
			if (Size == Capacity) {

				size_t NewCapacity = Capacity == 0 ? 1 : Capacity * 2;
				Reallocate(NewCapacity);
			}
			Array[Size++] = Data;
		}

		void PopBack() {
			
			Array[--Size].~T();

		}


	};
}