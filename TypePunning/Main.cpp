#include <iostream>

struct Entity
{
	int x, y;

	int* GetPositions() {
		return &x;
	}
};

int main() {
	Entity e = { 5, 8 };
	//int* position = (int*)&e;
	int* position = e.GetPositions();

	std::cout << position[0] << ", " << position[1] << std::endl;

	int y = *(int*)((char*)&e + 4);
	std::cout << y << std::endl;

	std::cin.get();
}