#include <iostream>
#include <vector>

void HelloWorld() {
	std::cout << "Hello World!" << std::endl;
}

void HelloWorld(int a) {
	std::cout << "Hello World! Value: " << a << std::endl;
}

void PrintValue(int value) {
	std::cout << "Value: " << value << std::endl;
}

void ForEach(const std::vector<int>& values, void(*func)(int))
{
	for (int value : values)
		func(value);
}


int main() {
	typedef void(*HelloWorldFunction1)();
	typedef void(*HelloWorldFunction2)(int);

	//auto function = HelloWorld;
	//void(*function)() = HelloWorld;

	HelloWorldFunction1 function1 = HelloWorld;
	HelloWorldFunction2 function2 = HelloWorld;

	function1();
	function2(21);

	std::vector<int> values = { 1, 5, 4, 2, 3 };
	//ForEach(values, PrintValue);

	ForEach(values, [](int value) { std::cout << "Value: " << value << std::endl; });

	std::cin.get();
}