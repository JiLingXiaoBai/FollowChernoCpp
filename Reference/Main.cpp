#include <iostream>

#define LOG(x) std::cout << x << std::endl;

void Increment(int& value) {
	value++;
}

int main()
{
	int a = 5;
	int b = 8;
	int& ref = a;
	ref = b;
	//now a = 8, b = 8

	int* ptr = &a;
	*ptr = 2;
	ptr = &b;
	*ptr = 1;
	//now a = 2, b = 1

	Increment(a);
	LOG(a);
	LOG(b);

	std::cin.get();
}