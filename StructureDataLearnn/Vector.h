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
		~Vector() {
			delete []Array;
			Array = nullptr;
		}

		Vector(const Vector &Other):Size(Other.Size),Capacity(Other.Capacity){
			
			Array = T[Capacity];

			for (size_t i = 0; i < Size; i++)
			{
				Array = Other.Array[i];
			}
		}

		T &operator[](const size_t Val) { return Array[Val]; }

		Vector &operator=(const Vector & Other){
			if (&Other == this)return *this;

			Size = Other.Size;
			Capacity = Other.Capacity;

			delete[] Array;
			Array = new T[Capacity];

			for (size_t i = 0; i < Size; i++)
			{
				Array[i] = Other.Array[i];
			}
			return *this;
		}

		T* Begin() { return Array; }
		T* End() { return Array + Size; }

		const T* Begin() const{ return Array; }
		const T* End() const{ return Array + Size; }

		size_t GetCapacity() { return Capacity; }
		size_t GetSize() { return Size; }
		bool Empty() { return Size == 0; }


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
		void Insert(size_t Index,const T& Data) {
			if (Index > Size)throw std::out_of_range("Index is out of range");
			if (Size == Capacity)Reallocate(Capacity == 0 ? 1 : Capacity * 2);

			for (size_t i = Size; i >Index ; i--)
			{
				Array[i] = Array[i - 1];
			}
			Array[Index] = Data;

			++Size;
		}


	};
}