#include <iostream>
#include <array>

class Entity
{
public:
	static const int exampleSize = 5;
	int example[exampleSize];

	std::array<int, 5> another = { 0, 1, 2, 3, 4 };

	Entity() {
		for (int i = 0; i < exampleSize; i++)
			example[i] = 2;

		for (int i = 0; i < another.size(); i++)
			another[i] = 5;
	}
};

int main() {
	// on stack
	int example[5];
	for (int i = 0; i < 5; i++)
		example[i] = 2;

	int* ptr = example;
	*(ptr + 2) = 5;
	// example 2 2 5 2 2

	Entity e;


	// on heap
	int* another = new int[5];
	for (int i = 0; i < 5; i++)
		another[i] = 2;
	// need to free memory on heap
	delete[] another;

	std::cin.get();
}