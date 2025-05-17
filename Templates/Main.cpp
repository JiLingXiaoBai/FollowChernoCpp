#include <iostream>

template<typename T, typename T1>
void Print(T value0, T1 value1)
{
	std::cout << value0 << " " << value1 << std::endl;
}

template<typename T>
void Print(T value0, T value1)
{
	std::cout << value0 << " " << value1 << std::endl;
}

template<typename T>
void Print(T value0)
{
	std::cout << value0 << std::endl;
}


template<typename T, int N>
class Array {
private:
	T m_Array[N];
public:
	T GetSize() const { return N; }
};

int main()
{
	//Print(5);
	//Print<int>(5);
	//Print("Hello");
	Print(5.5f, 5.1f);
	Print(5.5f, 5);
	Array<int, 6> array;
	Print(array.GetSize());
	std::cin.get();
}