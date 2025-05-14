#include <iostream>
#include <string>

class Entity {
private:
	// now m_X is a pointer, but m_Y is a int
	// int* m_X, m_Y 

	int* m_X, * m_Y; // m_X and m_Y are both pointers;
	mutable int m_DebugCount;
public:
	const int* const GetX() const {
		// Can not change the contents of the class in this method; except mutable contents
		m_DebugCount++;
		return m_X;
	}

	void SetX(int x) {
		*m_X = x;
	}
};


void PrintEntity(const Entity& e) {
	std::cout << e.GetX() << std::endl;
	//e.SetX(2);// Error
}

int main() {
	Entity e;


	const int MAX_AGE = 90;

	const int* a = new int;
	//int const* a = new int; They are the same

	//*a = 2; Error, can not change the contents of the const pointer

	a = (int*)&MAX_AGE; // but can change the address it points to

	std::cout << *a << std::endl;

	int* const b = new int;

	*b = 2; // Can change the contents at the address where the pointer points to

	//b = (int*)&MAX_AGE; Error, can not change the address where the pointer points to

	const int* const c = new int;
	// Can not change the address, and can not change the contents


	int x = 8;
	auto f = [=]() mutable 
	{
		x++;
		std::cout << x << std::endl;
	};
	f();
	// x = 8

	std::cin.get();
}