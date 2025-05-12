#include <iostream>

//int s_Variable = 10;
extern int s_Variable;


struct Entity {
	static int x, y;

	static void Print() {
		std::cout << x << ", " << y << std::endl;
	}
};

int Entity::x;
int Entity::y;

void Function() {
	static int i = 0;
	i++;
	std::cout << i << std::endl;
}

//class Singleton {
//private:
//	static Singleton* s_Instance;
//public:
//	static Singleton& Get() { return *s_Instance; }
//
//	void Hello() {}
//};
//
//
//Singleton* Singleton::s_Instance = nullptr;

class Singleton {
public:
	static Singleton& Get() {
		static Singleton instance;
		return instance;
	}

	void Hello() {}
};

int main() {
	std::cout << s_Variable << std::endl;

	Entity e;
	e.x = 2;
	e.y = 3;
	Entity::Print();

	Entity e1;
	e1.x = 5;
	e1.y = 8;
	Entity::Print();

	Entity::x = 6;
	Entity::y = 7;
	Entity::Print();

	Function();
	Function();
	Function();
	Function();
	Function();

	Singleton::Get().Hello();

	std::cin.get();
}